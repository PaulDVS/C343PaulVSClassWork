n=5
x=1

for i in range(1, n+1):
    for j in range(n):
        if n-i<=j:
            print(i, end="")
        else:
           print(x, end="")
    print()
    x=i
