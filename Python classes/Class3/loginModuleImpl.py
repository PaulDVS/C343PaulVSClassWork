from module1 import *

def userMenu():
    ch = 0
    currentUser = -1


    while (ch != "9"):
        print()
        print("User menu")
        print("1: User Login, 2: User Signup, 3: Forgot Password")
        print("4: View My Details 9: Exit")
        print("Please enter your choice: ")
        ch = input()

        if (ch == "1"):
            username = input("Please enter your username: ")
            password = input("Please enter your password: ")

            returnVar = userDetails.login(username, password)
            if(returnVar == -1):
                print("Error, incorrect username or password")
            else:
                print("Login, succesfull")
                currentUser=returnVar

        elif (ch == "2"):
            username = input("Please enter your username: ")

            returnVar = userDetails.signUp(username)
            if (returnVar == -1):
                print("Error, Username is in use")
            else:
                print("Signup, succesfull")
                currentUser = returnVar

        elif (ch == "3"):
            username = input("Please enter your username: ")
            returnVar = userDetails.forgotPassword(username)
            if (returnVar == -1):
                print("Error, Username doesn't exist")

        elif (ch == "4"):
            if(currentUser !=-1):
                userDetails.viewDetails(currentUser)
            else:
                print("Error, you aren't logged in")

def adminMenu():
    ch = 0
    currentUser = -1

    while (ch != "9"):
        print()
        print("Admin menu")
        if(currentUser==-1):
            print("1: Admin Login, 2: Admin Signup, 3: Forgot Password")
            print("9: Exit")
            print("Please enter your choice: ")
        else:
            print("1: Create Catalogue, 2: View Catalogue, 3: Logout")
            print("9: Exit")
            print("Please enter your choice: ")
        ch = input()

        if (ch == "1"):
            if (currentUser == -1):
                username = input("Please enter your username: ")
                password = input("Please enter your password: ")

                returnVar = adminDetails.login(username, password)
                if (returnVar == -1):
                    print("Error, incorrect username or password")
                else:
                    print("Login, succesfull")
                    currentUser = returnVar
            else:
                id = input("Please enter the id of the new catalogue: ")
                returnVar = adminDetails.createCatalogue(id)
                if (returnVar == -1):
                    print("Error, ID already in use")
                else:
                    print("Catalogue created Succesfully")

        elif (ch == "2"):
            if (currentUser == -1):
                username = input("Please enter your username: ")

                returnVar = adminDetails.signUp(username)
                if (returnVar == -1):
                    print("Error, Username is in use")
                else:
                    print("Signup, succesfull")
                    currentUser = returnVar
            else:
                adminDetails.displayCatalogue()

        elif (ch == "3"):
            if (currentUser == -1):
                username = input("Please enter your username: ")
                returnVar = adminDetails.forgotPassword(username)
                if (returnVar == -1):
                    print("Error, Username doesn't exist")
            else:
                currentUser=-1


ch=0

while(ch!="9"):
    print("Main menu")
    print("1: User Login, 2: Admin Login, 9:Exit")
    print("Please enter your choice: ")
    ch = input()

    if(ch=="1"):
        userMenu()
    elif(ch=="2"):
        adminMenu()
    elif(ch=="9"):
        print("Thank you for using")

    print()