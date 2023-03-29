
def CentsToDollarsCents(inputCents, outputDollars, outputCents):
    outputCents.append(inputCents%100)
    outputDollars.append(int((inputCents - (inputCents%100))/100))

totalCents = int(input("Please enter the total amount of cents: "))

resultDollars = []
resultCents = []

CentsToDollarsCents(totalCents, resultDollars,resultCents)

print("$",resultDollars[0],".",resultCents[0])