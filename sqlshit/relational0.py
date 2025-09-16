import sqlite3 as sq
con=sq.connect('sample.db')
c=con.cursor()

row=c.execute("""SELECT students.name, students.age, grades.subject, grades.grade
          FROM students
          JOIN grades on students.student_id=grades.student_id
          """)

for rows in row:
    print(rows)

