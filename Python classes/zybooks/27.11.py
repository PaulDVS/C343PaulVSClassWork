
fName1 = input("Please enter the first teacher's first name: ")
lName1 = input("Please enter the first teacher's last name: ")

fName2 = input("Please enter the second teacher's first name: ")
lName2 = input("Please enter the second teacher's last name: ")

fName3 = input("Please enter the third teacher's first name: ")
lName3 = input("Please enter the third teacher's last name: ")

if(fName1 =="None" and fName2 =="None" and fName3 =="None"):
    print("TBD")
elif(fName1 !="None" and fName2 =="None" and fName3 =="None"):
    print(fName1 + " " + lName1)
elif(fName1 !="None" and fName2 !="None" and fName3 =="None"):
    print(lName1 + "/" + lName2)
else:
    print(lName1 + "/" + lName2+"/...")