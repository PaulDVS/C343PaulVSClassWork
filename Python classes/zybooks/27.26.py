from math import sqrt

diagonal = int(input("Please enter the diagonal of the TV: "))

width = 0.0
height = 0

for x in range(diagonal-1):
    width += 1
    height = float(sqrt(diagonal**2 - width**2))
    if(width>height):
        print("Width:",width,"Height:",height)