
hours = input("Please enter hours: ")
minutes = input("Please enter minutes: ")
ampm = input("Please enter AM or PM: ")

if(int(hours)<10):
    hours = "0"+hours

if (int(minutes)<10):
    minutes = "0"+minutes

if(ampm =="AM" and hours == "12"):
    hours = "00"
elif(ampm =="PM" and hours != "12"):
    hours = str(int(hours)+12)

print(hours+":"+minutes)