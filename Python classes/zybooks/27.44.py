
def SimulateLine(customerArrivals):
    customerInLine = []
    lineLength=0
    for x in customerArrivals:
        lineLength += int(x)
        customerInLine.append(lineLength)
        if(lineLength>0):
            lineLength -= 1
    return customerInLine

inputVal = input("Please input the list of customer arrivals: ")
inputArrivals = inputVal.split(" ")

outputSimLine = SimulateLine(inputArrivals)

for x in outputSimLine:
    print(x, end=" ")
print()

