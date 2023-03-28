
runwayNum = input("Please enter the runway number: ")

runwayDeg = int(runwayNum)*10

facing=""

if(runwayDeg<22.5):
    facing="North"
elif(runwayDeg<67.5):
    facing = "North-East"
elif(runwayDeg<112.5):
    facing = "East"
elif(runwayDeg<157.5):
    facing = "South-East"
elif(runwayDeg<202.5):
    facing = "South"
elif(runwayDeg<247.5):
    facing = "South-West"
elif(runwayDeg<292.5):
    facing = "West"
elif(runwayDeg<337.5):
    facing = "North-West"
else:
    facing = "North"

print(str(runwayDeg)+" Degrees (" +facing+")")