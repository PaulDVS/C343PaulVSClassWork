
inputsize= int(input("Please enter the size of the list: "))

numList =[]
for x in range(inputsize):
    numList.append(int(input("Please enter the next list entry: ")))

max = numList[0]

for x in range(1, inputsize):
    if(numList[x] > max):
        max = numList[x]

print(max)