a = int(input("Enter the val of a = "))
b = int(input("Enter the val of b = "))

try:
     print(a/b)
except ZeroDivisionError as e:
    print("Zero division error = ",e)