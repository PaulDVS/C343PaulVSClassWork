
yearInput = int(input("Please enter a year: "))

if(yearInput%4!=0):
    print(False)
elif(yearInput%100 ==0 and yearInput%400!=0):
    print(False)
else:
    print(True)