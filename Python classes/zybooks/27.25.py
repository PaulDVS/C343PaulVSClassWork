
ais = int(input("Please enter the threshold: "))

for x in range(30,41):
    testscore = (ais/100)*1600 - (2.5*(x/40))*1600
    print("GPA:",x/10,"Test Score:",testscore)