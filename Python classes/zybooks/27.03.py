from cmath import sqrt

input1 = (input("Please enter the first point ")).split(",")
input2 = input("Please enter the second point ").split(",")

x1 = float(input1[0][1:])
y1 = float(input1[1][1:-1])

x2 = float(input2[0][1:])
y2 = float(input2[1][1:-1])

d = sqrt((x2 - x1)**2 + (y2 - y1)**2)

print(d)