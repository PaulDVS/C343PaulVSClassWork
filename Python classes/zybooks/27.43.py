
def GetAge(birthMonth, birthDay, birthYear, currMonth, currDay, currYear):
    age = currYear-birthYear
    if(currMonth<birthMonth):
        age = age-1
    elif(currMonth==currMonth):
        if(currDay<birthDay):
            age = age-1
    return age

bMonth = int(input("Please input birth month: "))
bDay = int(input("Please input birth day: "))
bYear = int(input("Please input birth year: "))

cMonth = int(input("Please input current month: "))
cDay = int(input("Please input current day: "))
cYear = int(input("Please input current year: "))

age = GetAge(bMonth,bDay,bYear, cMonth,cDay,cYear)

print("Age =",age)


