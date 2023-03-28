
inputsize= int(input("Please enter the size of the list: "))

numList =[]
for x in range(inputsize):
    numList.append(int(input("Please enter the next list entry: ")))

sorted = True
for x in range(inputsize-1):
    if(numList[x] >numList[x+1]):
        sorted = False

if (sorted):
    print("Sorted")
else:
    print("Unsorted")
