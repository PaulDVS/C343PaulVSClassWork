
input = input("Please enter the number plate: ")

numberPlate =[x for x in input]

if(int(numberPlate[5]) < 9):
    numberPlate[5] = chr(ord(numberPlate[5]) +1)
else:
    numberPlate[5] = "0"
    if (int(numberPlate[4]) < 9):
        numberPlate[4] = chr(ord(numberPlate[4]) + 1)
    else:
        numberPlate[4] = "0"
        if (int(numberPlate[3]) < 9):
            numberPlate[3] = chr(ord(numberPlate[3]) + 1)
        else:
            numberPlate[3] = "0"
            if (ord(numberPlate[2]) < ord("Z")):
                numberPlate[2] = chr(ord(numberPlate[2]) + 1)
            else:
                numberPlate[2] = "A"
                if (ord(numberPlate[1]) < ord("Z")):
                    numberPlate[1] = chr(ord(numberPlate[1]) + 1)
                else:
                    numberPlate[1] = "A"
                    if (ord(numberPlate[0]) < ord("Z")):
                        numberPlate[0] = chr(ord(numberPlate[0]) + 1)
                    else:
                        numberPlate[0] = "A"

output=""
for x in numberPlate:
    output+= x
print(output)