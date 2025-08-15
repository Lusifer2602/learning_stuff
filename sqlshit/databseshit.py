import sqlite3 as sql
#now we need to create a connection to our database
conn = sql.connect('customer.db')

#we need a cursor that tells the database what to do
'create a variable for the cursor here'
c=conn.cursor() #we can use this cursor to do all kinds of things with the database

#lets create a table now
# 6 " represent docstrings to perform actions to the table
c.execute("""CREATE TABLE customers(
    first_name text,
    last_name text,
    email text 
)""") #sql only has 5 data types ; NULL, INTEGER, REAL(decimal), TEXT, BLOB(different file types[img, music file, etc]

conn.commit() #this will commit the statement above to the database

#close our connection (you don't have to but to ensure explicit safety)
conn.close() 
''' i have already run this set of commands but i will leave it here just for the sake 
of coming back to it incase i forget some basic stuff later on '''
