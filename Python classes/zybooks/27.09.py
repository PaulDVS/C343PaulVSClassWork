
month = int(input("Please enter the month: "))
day = int(input("Please enter the day: "))
year = int(input("Please enter the year: "))

day +=1

if(month==1 and day>31):
    day =1
    month +=1
elif(month==2 and day>28):
    day =1
    month +=1
elif(month==3 and day>31):
    day =1
    month +=1
elif(month==4 and day>30):
    day =1
    month +=1
elif(month==5 and day>31):
    day =1
    month +=1
elif(month==6 and day>30):
    day =1
    month +=1
elif(month==7 and day>31):
    day =1
    month +=1
elif(month==8 and day>31):
    day =1
    month +=1
elif(month==9 and day>30):
    day =1
    month +=1
elif(month==10 and day>31):
    day =1
    month +=1
elif(month==11 and day>30):
    day =1
    month +=1
elif(month==12 and day>31):
    day =1
    month =1
    year+=1

print(str(month)+" "+str(day)+" "+str(year))