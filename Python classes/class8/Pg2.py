a = eval(input("Enter the val of a "))
b = eval(input("Enter the val of b "))

try:
    print(a+b)
except TypeError as e:
    print("Exception =",e)
