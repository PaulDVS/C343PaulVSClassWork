
marks = int(input("Please enter the marks: "))

try:
    if(marks<0 or marks>100):
        raise ValueError("The number should be between 0 and 100")
except ValueError as e:
    print("Error",e)