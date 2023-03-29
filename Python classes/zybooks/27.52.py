
def FindNextCharInString(inputString, index, inputChar):
    for x in range(index, len(inputString)):
        if(inputString[x] == inputChar):
            return x
    return -1

inputString = input("Please enter a string: ")
startIndex = int(input("Please enter an index: "))
inputChar = input("Please enter a char to search for: ")

output = FindNextCharInString(inputString, startIndex, inputChar)

print(output)