n=4

for i in range(1, n):
    x=0
    y=1
    for j in range(i):
        x=x+(j+1)
    for j in range (i+1):
        y=y*(j+1)
    x+=y
    print(" ", i , ": X =" ,x)




