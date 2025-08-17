import sqlite3 as sq

#lets first connect to the database
conn=sq.connect('customer.db') #this will create a new database if it doesn't exist or connect to the existing one if it already does

"""in order to create a  database in memory (the one thats only active if the program is run
and disappears as soon as the program is exited 
```
    conn=sq.connect(':memory')
"""
#connection established with the server

#now let us create a cursor to take actions into the database
c=conn.cursor()

#let us now create a table into the database that we then edit/perform actions to
c.execute("""CREATE TABLE customers (
          first_name  text,
          last_name text,
          email_add text
          )""")
conn.commit()
conn.close() #we close our connetion with the database here and then go to a new file where we then execute our actions
#when developing an app this can be avoided directly by creating a database once and zipping it into the app's file before delivery
