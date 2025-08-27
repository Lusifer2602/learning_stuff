#now we will show the contents of a pre existing table in a databse using sqlite3
import sqlite3 as sq
conn=sq.connect('details.db') #connected to the database
c=conn.cursor() #connected this cursor to the details database file
c.execute("""
    CREATE TABLE IF NOT EXISTS  scores (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT,
    kaksha int,
    grade TEXT
)""") #created a table under the database here

print("We are going to store name , class and grades of students"
      "you can quit the program anytime by just pressing q into any of the inputs you are being asked"
      "\n NOTE : if you terminate a program before the 3 values are entered then that one column just won't be saved")

while True:
    naam=input("Enter your name : ")
    if name=='q':
        break

    while True: #for taking input for kaksha and redirecting the user back to entering input again if they get it wrong
        try:
            kaksha=int(input("Enter your age : "))
            break
        
        except:
            print("Wrong type input try again")



c.execute("SELECT * FROM TABLE scores")
rows=c.fetchall()
for row in rows:
    print(row)
