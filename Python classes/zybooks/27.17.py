
userInput=int(input("Please enter the number of digits to add: "))

while(userInput!=0):
    sum = 0
    for x in range(userInput):
        userInput = int(input("Please enter the number to add: "))
        sum+=userInput
    print(sum)
    userInput = int(input("Please enter the number of digits to add: "))
