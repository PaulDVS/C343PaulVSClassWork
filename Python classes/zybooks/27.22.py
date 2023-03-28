
size= int(input())
listVar=[]
for x in range(size):
    listVar.append(input())

for x in range(len(listVar)-1):
    print(listVar[x], end=", ")
print(listVar[-1] + ".")
