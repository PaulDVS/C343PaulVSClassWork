
def FindNextSubstr(inputString, index, inputSubstring):
    length = len(inputSubstring)
    for x in range(index, len(inputString)-length+1):
        if(inputString[x:x+length] == inputSubstring):
            return x
    return -1

inputString = input("Please enter a string: ")
startIndex = int(input("Please enter an index: "))
inputSubstring = input("Please enter a substring to search for: ")

output = FindNextSubstr(inputString, startIndex, inputSubstring)

print(output)
