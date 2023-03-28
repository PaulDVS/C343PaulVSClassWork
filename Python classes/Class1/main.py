n="78hjuib841"
a=[];
b = [];
for x in n:
    if x.isnumeric():
        a.append(x)
    else:
        b.append(x)

print("a = ", a)
print("b = ", b)


a.sort()
b.sort()

print("a = ", a)
print("b = ", b)






