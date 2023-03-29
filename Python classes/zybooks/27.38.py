inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

for i in range(int(len(vectorVal)/2)):
    temp = vectorVal[i]
    vectorVal[i] = vectorVal[(i+1)*-1]
    vectorVal[(i+1)*-1] = temp

for x in vectorVal:
   print(x, end=" ")
print()