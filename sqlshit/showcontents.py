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
#   INTEGER PRIMARY KEY WILL INDEX USERS IF WE PRINT ALL THE CONTENTS OF THE DATABASE

print("We are going to store name , class and grades of students\n"
      "you can quit the program anytime by just pressing q into any of the inputs you are being asked\n"
      "\n NOTE : if you terminate a program before the 3 values are entered then that user will not be saved\n")

while True:
    name=input("Enter your name : ")
    if name=='q':
        break

    while True: #for taking input for kaksha and redirecting the user back to entering input again if they get it wrong
        kaksha=input("Enter the class you read in : ")
        if kaksha=='q':
            break
        try:
            kaksha=int(kaksha)
            break 
        except:
            print("Wrong type input try again")
    if kaksha=='q':
        break

    grade=input("Enter what grade they received : ","\n")
    if grade=='q':
        break

    c.execute("INSERT INTO scores (name, kaksha, grade) VALUES (?,?,?)", (name, kaksha, grade))
    conn.commit()

print("\nHere's the list of all the entries you have made so far \n")

c.execute("SELECT * FROM scores")
rows=c.fetchall()
for row in rows:
    print(row)

conn.close()
