masterlist = []

def create():
    print("Please enter data for new member")
    name = input("Please enter name: ")
    rollno = input("Please enter roll number: ")
    marks1 = int(input("Please enter marks 1: "))
    marks2 = int(input("Please enter marks 2: "))
    marks3 = int(input("Please enter marks 3: "))
    total = marks1+marks2+marks3

    masterlist.append([name, rollno, marks1, marks2, marks3, total, total/3])

def deleteByRollno():
    rollno = input("Please enter roll number: ")

    index = search(rollno)

    if(index==-1):
        print("Error, no person with that roll number")
        return

    masterlist.pop(index)

def search(rollno):
    index = -1
    for i in range(len(masterlist)):
        if(masterlist[i][1] == rollno):
            index = i
            return index

    return index

def display():
    rollno = input("Please enter roll number: ")

    index = search(rollno)

    if (index == -1):
        print("Error, no person with that roll number")
        return

    print(masterlist[index])



def update():
    rollno = input("Please enter roll number: ")

    index = search(rollno)

    if (index == -1):
        print("Error, no person with that roll number")
        return

    print("Please enter data for updated member")
    name = input("Please enter name: ")
    marks1 = int(input("Please enter marks 1: "))
    marks2 = int(input("Please enter marks 2: "))
    marks3 = int(input("Please enter marks 3: "))
    total = marks1 + marks2 + marks3

    masterlist[index] = ([name, rollno, marks1, marks2, marks3, total, total / 3])


ch=0
while ch != 9:
    print("Menu")
    print("1: Insert, 2:Delete, 3:Display, 4:Update, 9:Exit")
    print("Please enter your choice: ")
    ch = int(input())
    if ch==1:
        create()
    elif ch==2:
        deleteByRollno()
    elif ch==3:
        display()
    elif ch==4:
        update()
    elif ch==9:
        print("Ending program")
    else:
        print("Error, invalid input")

