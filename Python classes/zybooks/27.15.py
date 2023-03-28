
initVelocity = int(input("Please input the initial velocity: "))

time = 0
height=0
while(height>=0):
    print(time,height)
    time +=1
    height = initVelocity*time - 5*time*time