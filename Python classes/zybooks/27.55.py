
def RotateRight3(a, b, c):
    tmp = a[0]
    a[0] = c[0]
    c[0] = b[0]
    b[0] = tmp

a = [int(input("Please enter a value: "))]
b = [int(input("Please enter a value: "))]
c = [int(input("Please enter a value: "))]

RotateRight3(a, b, c)

print(a[0], b[0], c[0])