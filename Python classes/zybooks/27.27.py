


inputsize= int(input("Please enter the size of the list: "))

numList =[]
for x in range(inputsize):
    numList.append(int(input("Please enter the next list entry: ")))

maxDiff=0

for x in range(inputsize-1):
    diff = abs(numList[x+1] - numList[x])
    if (diff>maxDiff):
        maxDiff=diff
print(maxDiff)