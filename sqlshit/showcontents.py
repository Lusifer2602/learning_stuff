#now we will show the contents of a pre existing table in a databse using sqlite3
import sqlite3 as sq
conn=sq.connect('details.db') #connected to the database
c=conn.cursor() #connected this cursor to the details database file

c.execute("SELECT * FROM students") # The 'SELECT *' means it selects all columns from the table named 'students'

contents=c.fetchall() #this command stores all the collected data from the table to be stored into the variable 'contents' in form of a tuple

'''like this;
[
    (1, "bishamber lal", "asd"),
    (2, "batman", "alfred")
] '''

print("Here are people in the table 'students' of the database 'details.db'\n")

for people in contents: #here we loop through all the contents of the following tuple
    print(people, "\n")
conn.close()
