
inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

max = int(vectorVal[0])
min = int(vectorVal[0])
total = int(vectorVal[0])
avg=0

for x in range(1, len(vectorVal)):
    if(int(vectorVal[x])>max):
        max = int(vectorVal[x])
    if (int(vectorVal[x]) < min):
        min = int(vectorVal[x])
    total += int(vectorVal[x])

avg= total/len(vectorVal)

print(min, max, avg)
