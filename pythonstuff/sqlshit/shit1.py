import sqlite3 as sq

a=input("Enter your name")
b=int(input("Enter your age : "))
c=input("Enter your email : ")

conn=sq.connect('customer.db')
c=conn.cursor()

c.execute(""" INSERT INTO customers VALUES ('Peter', 'Parker', 'peterparker@oscorp.com')""")

print("Command executed successfully")

conn.commit()

conn.close()
