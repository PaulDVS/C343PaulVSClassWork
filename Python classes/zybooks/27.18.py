
userInput=int(input("Please enter the number to display: "))

while(userInput>0):
    print(userInput%10)
    userInput = int((userInput - userInput%10)/10)