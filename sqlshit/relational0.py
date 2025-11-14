import sqlite3 as sq
con=sq.connect('sample.db')
c=con.cursor()

row=c.execute("""
SELECT students.name, students.age, grades.subject, grades.grade

FROM students JOIN grades on students.student_id=grades.student_id

WHERE name='Kamal Kumar'
""")
# students.name, students.age, grades.subject are the different columns we are picking in the format of <tablename.columnname>.

#FROM students JOIN grades --> this line joins the two tables together 

# after JOIN is the condition < on students.student_id=grades.student_id > that states that join the tables from the point where in students(table) the student_id(column name) is equal to student_id(column name) in grades(table)

for i in row:
    print(i)

print("\nThis is students table data")
rows=c.execute("SELECT * FROM students")
for i in rows:
    print(i)

rows=c.execute("SELECT * FROM GRADES")
print("\nThis is grades table data")
for i in rows:
    print(i)
