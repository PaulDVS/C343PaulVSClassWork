
def facters(a):
    l = []
    for i in range(1,a+1, 100000):
        if(a%i ==0):
            l.append(i)
            print(l)
    return(l)

x = int(input("Please enter a number: "))

facters(x)
print("Done")