v1 = "0176524389"

v2 = "32456"

prev = 0
total = 0

for x in v2:
    for i in range(len(v1)):
        if(x == v1[i]):
            curr = i

            if(curr>prev):
                total += curr-prev
            else:
                total += prev-curr
            prev = curr
            break

print("Total traversals = ", total)