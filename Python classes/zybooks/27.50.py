
def listToInt(l):
    num = 0
    weight = 1
    for x in l:
        num += int(x)*weight
        weight = weight*10
    return num

inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

num = listToInt(vectorVal)
print(num)