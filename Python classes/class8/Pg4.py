
l = []
l.append(1)
l.append(22)
l.append(33)

i = int(input("Please enter the index "))

try:
    print(l[i])
except IndexError as e:
    print("Index error: ",e)