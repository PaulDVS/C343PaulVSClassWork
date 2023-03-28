def signUp(username):
    file = open("module1/adminDetails.txt", "r")
    userList = file.readlines()
    file.close()

    for user in userList:
        userDetails = user.strip()
        userDetails = userDetails.split(";")
        if (username == userDetails[0]):
            return -1

    password = input("Please input your password: ")
    details = input("Please input your details: ")

    file = open("module1/adminDetails.txt", "a")
    file.write(username + ";" + password + ";" + details + "\n")
    file.close()

    return len(userList)

def login(userName, password):
    file = open("module1/adminDetails.txt", "r")
    userList = file.readlines()
    file.close()

    for index, user in enumerate(userList):
        userDetails = user.strip()
        userDetails = userDetails.split(";")
        if (userName == userDetails[0]):
            if (password == userDetails[1]):
                return index
            else:
                break
    return -1

def forgotPassword(userName):
    file = open("module1/adminDetails.txt", "r")
    userList = file.readlines()
    file.close()

    i = -1
    details = ""

    for index, user in enumerate(userList):
        userDetails = user.strip()
        userDetails = userDetails.split(";")
        if (userName == userDetails[0]):
            i = index
            details = userDetails[2]
            break

    if (i == -1):
        return -1

    newpassword = input("Please input your new password: ")

    userList[i] = userName + ";" + newpassword + ";" + details + "\n"

    file = open("module1/adminDetails.txt", "w")

    for user in userList:
        file.write(user)

    file.close()


def createCatalogue(id):
    file = open("module1/catalogue.txt", "r")
    catalogueList = file.readlines()
    file.close()

    for catalogue in catalogueList:
        catalogueDetails = catalogue.strip()
        catalogueDetails = catalogueDetails.split(";")
        if (id == catalogueDetails[0]):
            return -1

    name = input("Please input catalogue name: ")
    description = input("Please input catalogue description: ")

    file = open("module1/catalogue.txt", "a")
    file.write(id + ";" + name + ";" + description + "\n")
    file.close()

def displayCatalogue():
    file = open("module1/catalogue.txt", "r")
    catalogueList = file.readlines()
    file.close()

    if(len(catalogueList) ==0):
        print("Catalogue is empty")

    for catalogue in catalogueList:
        catalogueDetails = catalogue.strip()
        catalogueDetails = catalogueDetails.split(";")
        print("ID:", catalogueDetails[0] ,"|Name:", catalogueDetails[1] ,"|Description:", catalogueDetails[2])

