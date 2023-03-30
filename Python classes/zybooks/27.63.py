
inches = int(input("Please enter inches: "))

feet= (inches-(inches%12))/12
inches = inches%12

print(str(int(feet))+"\'"+str(inches)+"\"")