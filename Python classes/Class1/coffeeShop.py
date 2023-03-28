#Paul van Sittert 20.3.23
import math

total = 0


size=""
while size != "small" and size != "medium" and size != "large":
    size = input("Do you want small, medium, or large? ")
    if size =="small":
        total +=2
    elif size =="medium":
        total +=3
    elif size =="large":
        total +=4

type=""
while type != "brewed" and type != "espresso" and type != "cold brew":
    type = input("Do you want brewed, espresso, or cold brew? ")
    if type =="brewed":
        total +=0
    elif type =="espresso":
        total +=0.5
    elif type =="cold brew:":
        total +=1

syrup=""
while syrup != "yes" and syrup != "no":
    syrup = input("Do you want a flavored syrup? ")
    if syrup =="yes":
        total += 0.5
        flavor = ""
        while flavor != "hazelnut" and flavor != "vanilla" and flavor != "caramel":
            flavor = input("Do you want hazelnut, vanilla, or caramel? ")


print("You asked for a", size, "cup of", type, "coffee", end="")
if syrup =="yes":
    print(" with", flavor, "syrup.")
else:
    print(".")

print("Your cup of coffee costs £", total)
print("The price with a tip is  £", math.ceil(total*1.15*100)/100)