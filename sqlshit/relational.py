import sqlite3 as sq

con=sq.connect('sample.db')
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
    # first list students that are in the database and print them with their student_id to know which student they want to edit
    #then start a session where his/her subject and grades are inserted
    #then insert into the database

    try:
        student_id=int(input("Enter student ID : "))
        if student_id==404:
            break
        subject=input("Enter subject name : ")
        if subject=='q':
            break
        grade=input("Grade ? : ")
        if grade=='q':
            break
        else:
            c.execute("INSERT INTO grades (student_id, subject, grade) VALUES (?, ?, ?)", (student_id, subject, grade))
            con.commit()
    except Exception as e:
        print("ERROR :", e)
