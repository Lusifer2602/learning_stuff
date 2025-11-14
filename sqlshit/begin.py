import sqlite3 as sq

conn=sq.connect('random.db')
c=conn.cursor()
while True:
    choose=int(input("Enter what do you want to do here?\n"
                 "1. Entering new hero names.\n"
                 "2. Listing all heroes in the database\n"
                 "4. Look up info about a hero by their name\n"
                     "3. Exit the program : "))
    if choose==1:
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
    elif choose==2:
        allitems=c.execute("SELECT * FROM names")
        for i in allitems:
            print(i)
    elif choose==3:
        break
    elif choose==4:
        name=input("Enter the name (with 1st letter capital) to look up : ")
        details=c.execute("SELECT * from names WHERE heroname= ?", (
    else:
        print("Invalid Input")
conn.close()
