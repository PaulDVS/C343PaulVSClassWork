marks1 = eval(input("Please enter the first marks: "))
marks2 = eval(input("Please enter the second marks: "))

try:
    if(marks1>marks2):
        print(marks1)
    else:
        print(marks2)
    print("Total =" + marks1+marks2)

except TypeError as e:
    print("Error", e)
except SyntaxError as e:
    print("Invalid syntax",e)