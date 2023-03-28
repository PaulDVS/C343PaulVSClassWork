
n = int(input("Please input n: "))


print("Sequence:", end=" ")
if(n<0):
    print(0)

for x in range(n, -1, -1):
    if(x%2==0):
        print(x, end=" ")
print()