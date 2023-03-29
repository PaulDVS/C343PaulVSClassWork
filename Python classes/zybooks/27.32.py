
inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

num=0
power=1
for x in range(len(vectorVal)-1,-1,-1):
    num += int(vectorVal[x])*power
    power = power*2

print(num)