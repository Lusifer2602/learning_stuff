import sqlite3 as sq
con=sq.connect('details.db')
c=con.cursor()

print("GRADE STUDENT SUBJECT GRADE")
c.execute("SELECT * FROM grades WHERE student_id=3")
all=c.fetchall()
for rows in all:
    print(rows)
