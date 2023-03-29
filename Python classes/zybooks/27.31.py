
inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

negativeVector = []
for x in vectorVal:
    if(int(x)<0):
        negativeVector.append(int(x))

print(len(negativeVector))
for x in negativeVector:
    print(x)