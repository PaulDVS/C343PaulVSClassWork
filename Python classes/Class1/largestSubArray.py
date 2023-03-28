varArr = [1, -2, 3, -2, 5]

max= varArr[1]

for i in range(len(varArr)):
    total = 0
    for j in range(i, len(varArr)):
        total += varArr[j]
        if total>max:
            max=total

print("Highest sub array value is: ", max)