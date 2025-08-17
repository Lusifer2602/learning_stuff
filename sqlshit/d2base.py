import sqlite3 as sq

print("Alright let us enter some data to the database")
first_name=input("Enter the first name  : ")
last_name=input("Enter the last name : ")
email_address=input("Enter your emailaddress babygirl : ")
details = [(first_name), (last_name), (email_address)]
conn=sq.connect('customer.db')

c=conn.cursor()
c.execute("INSERT INTO customers VALUES(?, ?, ?)", details)
print("Data added successfully !!!")

conn.commit()
conn.close()


