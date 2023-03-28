
searchId = int(input("Please enter the id to lookup: "))

file = open("CustomerDb.txt", "r")

listValues = file.readlines()

file.close

found = False
for x in listValues:
    record = x.split(" ")
    if(int(record[0]) == searchId):
        print(record[1], record[2][:-1])
        found=True
        break

if not found:
    print("Not found")