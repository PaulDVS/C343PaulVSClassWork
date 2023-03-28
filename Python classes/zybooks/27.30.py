
inputVal = input("Please input the vector: ")
yearlyValues = inputVal.split(" ")

for x in range(0, len(yearlyValues), 4):
    for y in range(4):
        print(yearlyValues[x+y], end=" ")
    print()