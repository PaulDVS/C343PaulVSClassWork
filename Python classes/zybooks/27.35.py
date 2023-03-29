
inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

countOcc = dict()

for x in vectorVal:
    if x in countOcc.keys():
        countOcc[x] +=1
    else:
        countOcc[x] = 1

max =vectorVal[0];

for x in countOcc.keys():
    if (countOcc[x]>countOcc[max]):
        max = x

print("Max is",max,"with",countOcc[max],"occurances")