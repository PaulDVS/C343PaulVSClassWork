
def DigitToWord(digit):
    if(digit==1):
        return "one"
    elif(digit==2):
        return "two"
    elif(digit==3):
        return "three"
    elif(digit==4):
        return "four"
    elif(digit==5):
        return "five"
    elif(digit==6):
        return "six"
    elif(digit==7):
        return "seven"
    elif(digit==8):
        return "eight"
    elif(digit==9):
        return "nine"
    elif(digit==0):
        return ""
    else:
        return "error"

def TensDigitToWord(digit):
    if (digit == 2):
        return "twenty"
    elif (digit == 3):
        return "thirty"
    elif (digit == 4):
        return "fourty"
    elif (digit == 5):
        return "fifty"
    elif (digit == 6):
        return "sixty"
    elif (digit == 7):
        return "seventy"
    elif (digit == 8):
        return "eighty"
    elif (digit == 9):
        return "ninty"
    else:
        return "error"

def TwoDigitNumToWords(num):
    word1 = DigitToWord(num%10)
    word2 = TensDigitToWord((num-num%10)/10)

    return word2+" "+word1

inputNum = int(input("Please enter a number from 20-99: "))

numWord = TwoDigitNumToWords(inputNum)
print(numWord)