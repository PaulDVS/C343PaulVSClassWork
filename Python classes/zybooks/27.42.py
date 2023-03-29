
def PickupMinutes(xUser, yUser, x1,y1,x2,y2,x3,y3):
    d1 = abs(xUser - x1) + abs(yUser - y1)
    d2 = abs(xUser - x2) + abs(yUser - y2)
    d3 = abs(xUser - x3) + abs(yUser - y3)

    smallestDist = d1
    if(d2<smallestDist):
        smallestDist = d2
    if (d3 < smallestDist):
        smallestDist = d3

    waitTime = smallestDist*2
    return waitTime

userX=int(input("Please enter the users x coord: "))
userY=int(input("Please enter the users y coord: "))

driver1X=int(input("Please enter driver 1's x coord: "))
driver1Y=int(input("Please enter driver 1's y coord: "))

driver2X=int(input("Please enter driver 2's x coord: "))
driver2Y=int(input("Please enter driver 2's y coord: "))

driver3X=int(input("Please enter driver 3's x coord: "))
driver3Y=int(input("Please enter driver 3's y coord: "))

waitTime = PickupMinutes(userX,userY,driver1X,driver1Y,driver2X,driver2Y,driver3X,driver3Y)
print("Pickup time =",waitTime,"minutes")