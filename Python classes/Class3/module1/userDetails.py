def signUp(username):
    file = open("module1/userDetails.txt", "r")
    userList = file.readlines()
    file.close()

    for user in userList:
        userDetails = user.strip()
        userDetails = userDetails.split(";")
        if(username == userDetails[0]):
            return -1

    password = input("Please input your password: ")
    details = input("Please input your details: ")

    file = open("module1/userDetails.txt", "a")
    file.write(username+";"+password+";"+details+"\n")
    file.close()

    return len(userList)

def login(userName, password):
    file = open("module1/userDetails.txt", "r")
    userList = file.readlines()
    file.close()

    for index, user in enumerate(userList):
        userDetails = user.strip()
        userDetails = userDetails.split(";")
        if(userName == userDetails[0]):
            if(password == userDetails[1]):
                return index
            else:
                break
    return -1

def forgotPassword(userName):
    file = open("module1/userDetails.txt", "r")
    userList = file.readlines()
    file.close()

    i=-1
    details=""

    offset=0

    for index, user in enumerate(userList):
        userDetails = user.strip()
        userDetails = userDetails.split(";")
        if (userName == userDetails[0]):
            i=index
            details = userDetails[2]
            break
        else:
            offset+= len(user)

    if(i==-1):
        return -1

    newpassword = input("Please input your new password: ")

    updatedUser = userName+";"+newpassword+";"+details+"\n"

    file = open("module1/userDetails.txt", "r+")
    file.seek(offset)
    file.write(updatedUser)
    file.close()

    #userList[i] = userName+";"+newpassword+";"+details+"\n"

    #file = open("module1/userDetails.txt", "w")

   # for user in userList:
       # file.write(user)

    #file.close()

def viewDetails(index):
    file = open("module1/userDetails.txt", "r")
    userList = file.readlines()
    file.close()

    user = userList[index]
    userDetails = user.strip()
    userDetails = userDetails.split(";")

    print("Username:", userDetails[0], "|Password:", userDetails[1], "|Details:", userDetails[2])
