import json
print("This program has been created to store names and surnames of people\n"
      "So please Enter the first name and then the second name to store it into the new.json file\n")
while True:
    b=input("Enter Name of the person : ")
    if b=='q':
        break
    c=input("Enter Surname : ")
    if c=='q':
        break
    d={b:c}

    with open('new.json', 'a') as file:
        json.dump(d, file)


