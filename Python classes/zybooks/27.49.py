
def CalculateMonthElectricCost(usage, cutoff1, price1, cutoff2, price2, price3):
    totalCost = 0;
    if(usage<cutoff1):
        total = usage*price1
        return total
    else:
        total = cutoff1*price1
        usage = usage-cutoff1

    if(usage<cutoff2):
        total += usage*price2
        return total
    else:
        total += cutoff2*price2
        usage = usage-cutoff2

    total += usage * price3
    return total

userUsage= float(input("Please enter your kw/h usage: "))
energyCuttoff1= int(input("Please enter the first cutoff: "))
energyPrice1= float(input("Please enter the first energy price: "))
energyCuttoff2= int(input("Please enter the second cutoff: "))
energyPrice2= float(input("Please enter the second energy price: "))
energyPrice3= float(input("Please enter the third energy price: "))

totalcost = CalculateMonthElectricCost(userUsage, energyCuttoff1, energyPrice1, energyCuttoff2, energyPrice2, energyPrice3)

print("$",round(totalcost,2))