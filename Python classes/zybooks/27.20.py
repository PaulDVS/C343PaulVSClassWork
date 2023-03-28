

pword=input("Please enter the password: ")

lenPword = True
if(len(pword) < 8):
    print("Too short")
    lenPword=False

letterChar= False
numberChar= False
specialChar = False

for x in pword:
    if(x.isalpha()):
        letterChar=True
    if (x.isnumeric()):
        numberChar = True
    if (x in ["!", "#", "%"]):
        specialChar = True

if not (letterChar):
    print("Missing letter")
if not (numberChar):
    print("Missing number")
if not (specialChar):
    print("Missing special")

if(pword and letterChar and numberChar and specialChar):
    print("OK")