import sqlite3 as sq

#now let us connect with the sqlite server
conn=sq.connect("details.db")

# create a cursor (like a pen) to write sql commands
c=conn.cursor()
print("Alright lets save some data")
#create a table
c.execute("SELECT * FROM marks");
#CREATE TABLE IF NOT EXISTS will create a table within the database if it doesn't exist already
#c.execute will let me execute commands through the cursor into the database
while True:
    name=input(" Name : ")

    while True: #error check for saving mobile number to the database
        score=input("Marks : ")
        if score=='q':
            break
        try:
            score=int(score)
            break
        except:
            print("Invalid type of input try again\n")

    # here we will add data to the database
    c.execute("INSERT INTO students (name, score) VALUES (?,?)", (name, score))

conn.commit() #save changes to the database
conn.close() #close connection with database
