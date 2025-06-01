b=input("Enter your note : ")
print('Enter q to quit')
print('Enter read to print your saved notes')
if b=='q':
    exit()
with open('notes.txt', 'a') as file:
    file.write(b+'\n')

while True:
    # a=input("Enter name of the file you want to create (with the extension)")
    # if a=='q':
        # return "Out of the note entry"
        new=input("Enter the next note : ")
        if new=='q':
           break 
        with open('notes.txt', 'a') as file:
            file.write(new+'\n')
        if new=='read':
            with open('notes.txt', 'r') as file:
                file.seek(0)
                readfile=file.read()
                print(readfile)

