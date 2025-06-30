def editlist():
    print("You have started to edit the list,\n"
          "Enter q to stop editing the list\n"
          "or continue entering your tasks")
    while True:
        a=input("Enter next task : ")
        if a=='q':
            break
        with open('tasklist.txt', 'a') as file:
            file.write(a+'\n')   


def showcontents():
    with open('tasklist.txt', 'r') as file:
        print("Here are the saved tasks\n")
        tasks=file.readlines()

        for i, task in enumerate(tasks, start=1):
            print(f"{i}. {task.strip()}")

while True:
    start=int(input("Welcome back to this to-do-list app\n"
      "Enter 1 to add tasks to the list\n"
      "Enter 2 to show saved list of tasks\n"
      "Enter 3 to exit the program : "))

    if start==1:
        editlist()
    elif start==2:
        showcontents()
    elif start==3:
        break
    else:
        print("Invalid Input")
        break


