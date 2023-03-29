
inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

i = 0
prevFrame=0
frameScore=[]

for x in range(9):
    if(int(vectorVal[i])==10):
        score = prevFrame+10+int(vectorVal[i+1])+int(vectorVal[i+2])
        i+=1
        prevFrame = score
        frameScore.append(score)
        continue
    elif((int(vectorVal[i])+int(vectorVal[i+1]))==10):
        score = prevFrame + 10 + int(vectorVal[i + 2])
        i += 2
        prevFrame = score
        frameScore.append(score)
        continue
    else:
        score = prevFrame + int(vectorVal[i]) +  int(vectorVal[i+1])
        i += 2
        prevFrame = score
        frameScore.append(score)

if(int(vectorVal[i])==10 or ((int(vectorVal[i])+int(vectorVal[i+1]))==10)):
    score = prevFrame + int(vectorVal[i]) + int(vectorVal[i+1]) + int(vectorVal[i+2])
else:
    score = prevFrame + int(vectorVal[i]) + int(vectorVal[i+1])
frameScore.append(score)

for x in frameScore:
    print(x, end=" ")
print()