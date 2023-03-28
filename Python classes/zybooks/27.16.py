
average=0
sum=0
valid=0
invalid=0

userInput=int(input("Please enter the dice roll: "))
while(userInput!=0):
    if(userInput<2 or userInput>12):
        invalid+=1
    else:
        valid+=1
        sum+=userInput
        average = sum/valid
    userInput = int(input("Please enter the dice roll: "))


print("Average:", average)
print("Valid:", valid)
print("Invalid:", invalid)