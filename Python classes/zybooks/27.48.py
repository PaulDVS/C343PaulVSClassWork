
def FirstRectangleSmaller(r1x1,r1y1,r1x2,r1y2,r2x1,r2y1,r2x2,r2y2):
    area1 = (abs(r1x1-r1x2)) * (abs(r1y1-r1y2))
    area2 = (abs(r2x1-r2x2)) * (abs(r2y1-r2y2))

    if(area1<area2):
        return True
    else:
        return False

rect1x1=int(input("Please enter rectangle 1's top left corner's x coord: "))
rect1y1=int(input("Please enter rectangle 1's top left corner's y coord: "))

rect1x2=int(input("Please enter rectangle 1's bottom right corner's x coord: "))
rect1y2=int(input("Please enter rectangle 1's bottom right corner's y coord: "))

rect2x1=int(input("Please enter rectangle 2's top left corner's x coord: "))
rect2y1=int(input("Please enter rectangle 2's top left corner's y coord: "))

rect2x2=int(input("Please enter rectangle 2's bottom right corner's x coord: "))
rect2y2=int(input("Please enter rectangle 2's bottom right corner's y coord: "))

print(FirstRectangleSmaller(rect1x1,rect1y1,rect1x2,rect1y2,rect2x1,rect2y1,rect2x2,rect2y2))

