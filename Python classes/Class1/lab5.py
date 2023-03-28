n = 3

for i in range(n):
    print( " "*(n+1-i), end ="")
    print("*"*(1+i*2))

for i in range(int(n/2)):
    print(" "*(n-2-i), end ="")
    print("*" * (n - 1 + i), end="")
    print(" "*n, end="")
    print("*"*(n-1+i))

print("*"*n, end="")
print(" "*n, end="")
print("*"*n)

for i in range(int(n/2)-1, -1, -1):
    print(" "*(n-2-i), end ="")
    print("*" * (n - 1 + i), end="")
    print(" "*n, end="")
    print("*"*(n-1+i))

for i in range(n-1, -1, -1):
    print( " "*(n+1-i), end ="")
    print("*"*(1+i*2))