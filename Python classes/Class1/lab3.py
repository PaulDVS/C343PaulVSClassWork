n=5

for i in range(n):
    for j in range(n-1-i):
        print(" ", end="")
    print("/", end="")
    for j in range(i):
        print("  ", end="")
    print("\\")
for i in range(n):
    print("--", end="")
print()
for i in range(n):
    print("|", end="")
    for j in range(n-1):
        if(i==n-1):
            print("__", end="")
        else:
            print("  ", end="")

    print("|")
