
def maxFive(a,b,c,d,e):
    maxfound = a

    if(b>maxfound):
        maxfound=b

    if (c > maxfound):
        maxfound = c

    if (d > maxfound):
        maxfound = d

    if (e > maxfound):
        maxfound = e

    return maxfound

val1 = input("Please input the first number: ")
val2 = input("Please input the second number: ")
val3 = input("Please input the third number: ")
val4 = input("Please input the fourth number: ")
val5 = input("Please input the fifth number: ")

print(maxFive(val1, val2, val3, val4, val5))