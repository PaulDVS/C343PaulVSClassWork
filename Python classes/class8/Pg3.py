i= 20.0

try:
    for j in range (1, 2000):
        i= i**j
except OverflowError as e:
    print("Overflow: ", e)