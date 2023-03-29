
def intToStringAddComma(num):
    stringNum =""
    commaCounter=0
    while(num>0):
        if (commaCounter % 3 == 0 and commaCounter!=0):
            stringNum = ","+ stringNum
        stringNum = str(int(num%10)) + stringNum
        num = int(num-num%10)/10
        commaCounter += 1
    return stringNum


inputNum = int(input("Please enter a number: "))

stringNum = intToStringAddComma(inputNum)

print(stringNum)