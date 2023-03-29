inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

longestSeq = 0
currSeq=0
for i in range(1, int(vectorVal[0])+1):
    if(vectorVal[i] != "I"):
        currSeq +=1
        if (currSeq > longestSeq):
            longestSeq = currSeq
    else:
        if(currSeq>longestSeq):
            longestSeq = currSeq
        currSeq=0

print(longestSeq)