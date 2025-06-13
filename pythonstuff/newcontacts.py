import json
#ok this is a temp contact manager that i am creating to test something because why not hehe

print("THIS IS A CONTACT MANAGING APPLICATION")
print("Enter q to quit in the name section \n PS: DO NOT enter a string in the phone number section or the program could break")

while True:
    a=input("Enter the name : ")
    if a=='q':
        break

    b=int(input("Enter phone number : "))
    if type(b)!=int:
        print("Mahnn here the input has to be an integer come on")

    contacts={"Name":a, "Phone":b}

    with open('newcontacts.json', 'a') as file:
        json.dump(contacts, file)
        file.write('\n')

print("Contacts added successfully,\nHere are all the saved contacts")
contactslist=[]
try:
    with open('newcontacts.json', 'r') as details:
        for bitches in details:
            try:
                smoke=json.loads(bitches)
                contactslist.append(smoke)
            except json.JSONDecodeError:
                print("Skipping Corrupted line")

except FileNotFoundError:
    print("Contact file not found")

print("Name \t Contact Number")
for listpeople in contactslist:
    print(listpeople["Name"], listpeople["Phone"])

print("List Ends here")
