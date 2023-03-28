def stringCheck(binaryString):
    returnVar=[0,0,0] #Count of 1010, count of 0101, count of beautiful substring

    if len(binaryString) == 1:
        returnVar[2] = str(int(returnVar[2]) +1)
        return returnVar

    for i in range(len(binaryString)):
        substring = binaryString[:i] + binaryString[i+1:]
        catchVar = stringCheck(substring)
        returnVar[0] = str(int(returnVar[0]) + int(catchVar[0]))
        returnVar[1] = str(int(returnVar[1]) + int(catchVar[1]))
        returnVar[2] = str(int(returnVar[2]) + int(catchVar[2]))

    if binaryString =="1010":
        returnVar[0] = str(int(returnVar[0]) +1)
    elif binaryString =="0101":
        returnVar[1] = str(int(returnVar[1]) + 1)

    return returnVar

s1 =input("Length of binary string: ")
s2 =input("Binary String: ")

catchVar = stringCheck(s2)

print("Number of 1010 substring: ", catchVar[0])
print("Number of 0101 substring: ", catchVar[1])
print("Number of beautiful substring: ", catchVar[2])