#lets save some phone numbers with their respective names
#and end the data entry with q as input
#and enter delete to navigate to a place where person can delete the following username
#the user will be asked if they want to remove the contact using their phone number or username

import json
print("This is a program that we use to manage different contacts")
print("Enter q to quit the program otherwise keep adding your contacts :) ")

while True:
    
    name = input("Enter name with surname here : ")
    if name=='q':
        break
    number=int(input("Phone number : "))
    contacts={'name':name,'number':number}   
    if type(number)!=int:
        print("Phone number has to be an integer")
    with open('contact.json', 'a') as file:
        json.dump(contacts, file)

