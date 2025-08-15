import sqlite3 as sq

#connect to database here
conn=sq.connect("customer.db")

#create a cursore here
c=conn.cursor()
# now we will try to add multiple users to the database at once
multiple_customers=[('Hiten', 'Amster', 'Iambatman@gmail.com'),
                    ('Bruce', 'Wayne', 'aslibatman@gmail.com'),
                    ('Clark', 'Kent', 'superman@gmail.com')
                    ] #make sure it is stored as tuple inside a single list

#here we type in the commands that are going to be run on the database
c.execute("INSERT INTO customers VALUES (?, ?, ?)", multiple_customers) 
#this will add all the 
#customers in the list to the database

''' here INSERT INTO defines what part of the database we want to enter the values 
    in that sequence under the <customers> part of the database'''
print("data added successfully")

#now lets commit these changes to the database
conn.commit()
print("close server successfully")

#closing the sql connection now
conn.close()
