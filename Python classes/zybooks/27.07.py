
chord = input("Please enter chord: ")

if(chord == "G"):
    print("e|-3-")
    print("B|-0-")
    print("G|-0-")
    print("D|-0-")
    print("A|-2-")
    print("E|-3-")
elif(chord == "C"):
    print("e|-0-")
    print("B|-1-")
    print("G|-0-")
    print("D|-2-")
    print("A|-3-")
    print("E|---")
elif(chord == "D"):
    print("e|-2-")
    print("B|-3-")
    print("G|-2-")
    print("D|-0-")
    print("A|---")
    print("E|---")
else:
    print(chord + " is not a supported chord.")