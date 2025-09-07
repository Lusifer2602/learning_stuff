import sqlite3 as sq

con=sq.connect('details.db')
c=con.cursor()

c.execute("""CREATE TABLE IF NOT EXISTS students(
          student_id INTEGER PRIMARY KEY AUTOINCREMENT,
          name TEXT NOT NULL,
          age INTEGER
          ) """)
c.execute(""" CREATE TABLE IF NOT EXISTS grades (
          grade_id INTEGER PRIMARY KEY AUTOINCREMENT,
          student_id INTEGER,
          subject TEXT NOT NULL,
          grade TEXT NOT NULL,
          FOREIGN KEY (student_id) REFERENCES students (student_id)
          )""")

while True:
    try:
        name=input("Enter student's name : ")
        if name=='q':
            break
        age=int(input("Age : "))
        if age==404:
            break
        c.execute("INSERT INTO students(name, age) VALUES(?, ?)", (name, age))
        con.commit()
    except Exception as e:
        print("ERROR :", e)
while True:
    try:
        student_id=int(input("Enter student ID : "))
        subject=input("Enter subject name : ")
        grade=input("Grade ? : ")
        if student_id=='q' or subject=='q' or grade=='q':
            break
        else:
            c.execute("INSERT INTO grades (student_id, subject, grade) VALUES (?, ?, ?)", (student_id, subject, grade))
            c.commit()
    except Exception as e:
        print("ERROR :", e)
