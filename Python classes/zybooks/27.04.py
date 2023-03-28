
age = int(input("Please input age: "))
carryBags = int(input("Please input number of carry-on bags: "))
checkedBags = int(input("Please input number of checked bags: "))



if age>=60:
    price =290
elif age<=2:
    price = 0
else:
    price = 300


if not(carryBags == 0):
    price +=10

if checkedBags==2:
    price += 25
elif checkedBags>2:
    price += 25 + (checkedBags-2)*50

print("Price = £",price)