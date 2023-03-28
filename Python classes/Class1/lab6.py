
x = int(input("Please input the amount of numbers to be input: "))
y = []

for i in range(x):
    y.append(int(input("Input: ")))

for i in range(1, x+1):
    if not i in y:
        print(i, end=" ")
