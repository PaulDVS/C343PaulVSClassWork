
inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")


i=0
while(i<len(vectorVal)):
    if(vectorVal[i] == "1" and i+2<len(vectorVal) and vectorVal[i+1] == "1" and vectorVal[i+2] == "1"):
        print(i + 1,"-", end=" ")
        while(i+1<len(vectorVal) and vectorVal[i+1] == "1"):
            i+=1
        print(i + 1, end=" ")
    elif(vectorVal[i] == "1"):
        print(i+1, end=" ")
    i += 1

if(not "1" in vectorVal):
    print("None", end=" ")

print()