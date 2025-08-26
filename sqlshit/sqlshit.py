import sqlite3 as sq

#now let us connect with the sqlite server
conn=sq.connect("details.db")

# create a cursor (like a pen) to write sql commands
c=conn.cursor()

#create a table
c.execute("""
    CREATE TABLE IF NOT EXISTS students (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT,
        mobile,
        mail TEXT
)
""")
#CREATE TABLE IF NOT EXISTS will create a table within the database if it doesn't exist already
#c.execute will let me execute commands through the cursor into the database
naam=input("Please enter your name : ")

while True: #error check for saving mobile number to the database
    try:
        number=int(input("Enter your mobile number : "))
        break
    except:
        print("Invalid Type of Input try again")

em=input("Enter your email id : ")

#now we will add data to the database ; here goes one
c.execute("INSERT INTO students (name, mobile, mail) VALUES (?,?,?)", (naam, number, em)) #this will add the following details to the database
#we can also create a loop for it to keep getting executed till the user presses q at any instance and no more entries are given to the database

#now let us access contents of the database
c.execute("SELECT * FROM students")
rows=c.fetchall()

for row in rows:
    print(row)

conn.commit() #save changes to the database
conn.close() #close connection with database
