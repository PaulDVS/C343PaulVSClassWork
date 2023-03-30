
currGrade = int(input("Please enter your current grade: "))

neededGrade = ((90 - (currGrade/100)*60)/40)*100

print(str(round(neededGrade,1))+"%")