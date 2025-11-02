import sqlite3 as sq

conn=sq.connect('random.db')
c=conn.cursor()

c.execute('''
CREATE TABLE IF NOT EXISTS names(
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    heroname TEXT,
    realname TEXT,
    age INTEGER
    )''')

while True:
    a=input("Enter the hero name : ")
    if a=='q':
        break
    b=input("Enter their real name : ")
    if b=='q':
        break
    age=input("Enter their age : ")
    if age=='q':
        break
    else:
        try:
            d=int(age)
        except Exception as e:
            print("Error :", e)

    c.execute("INSERT INTO names (heroname, realname, age) VALUES (?, ?, ?)", (a, b, d))
    conn.commit()

conn.close()
