def triShape(str1):
    print("  /\\  "*len(str1))
    print(" /  \\ " * len(str1))

    for x in range(len(str1)):
        print("/ ", end="")
        print(str1[x], end="")
        print("  ", end="")
        print("\\", end="")
    print()
    print("-" + "------" * len(str1))

def sqrShape(str1):
    print("-" + "------"*len(str1))
    print("|" + "     |" * len(str1))
    print("|", end="")
    for x in range(len(str1)):
        print("  ", end="")
        print(str1[x], end="")
        print("  ", end="")
        print("|", end="")
    print()
    print("|" + "     |" * len(str1))


def hexShape(str1):
    print("  ---  "*len(str1))
    print(" /   \\ " * len(str1))
    print("/     \\" * len(str1))

    for x in range(len(str1)):
        print("\\  ", end="")
        print(str1[x], end="")
        print("  /", end="")
    print()
    print(" \\   / " * len(str1))

str1 = input("Please enter a string to display ")

str2 = input("Please enter a shape (Triangle, Square or Hexagon) ")

for i in range(0, len(str1)):
    if str2 == "Triangle":
        triShape(str1[0:i+1])
    elif str2 == "Square":
        sqrShape(str1[0:i + 1])
    elif str2 == "Hexagon":
        hexShape(str1[0:i + 1])
    else:
        print("Error incorrect input")
        break


if str2 == "Square":
     print("-" + "------" * len(str1))
elif str2 == "Hexagon":
    print("  ---  "*len(str1))
