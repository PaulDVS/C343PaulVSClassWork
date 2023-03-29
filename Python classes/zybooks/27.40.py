
def Ascend3(a,b,c):
    if(a[0]>b[0]):
        temp = a[0]
        a[0] = b[0]
        b[0] = temp

    if (a[0] > c[0]):
        temp = a[0]
        a[0] = c[0]
        c[0] = temp

    if (b[0] > c[0]):
        temp = b[0]
        b[0] = c[0]
        c[0] = temp


val1 = [int(input("Please enter the first value: "))]
val2 = [int(input("Please enter the second : "))]
val3 = [int(input("Please enter the third value: "))]

Ascend3(val1, val2, val3)

print(val1[0],val2[0],val3[0])