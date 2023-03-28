
inputVar = input("Please enter input: ")

if(inputVar[-1] in ["?","!"]):
    pass
elif(inputVar[-1] == ","):
    inputVar[-1] == "."
elif(inputVar[-1] == "." and (len(inputVar)>1 and inputVar[-2] == ".") and (len(inputVar)<3 or inputVar[-3] != ".")):
    inputVar = inputVar[:-1]
elif (inputVar[-1] != "."):
    inputVar = inputVar + "."

print(inputVar)
