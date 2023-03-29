
name = input("Please enter a name: ")

try:
    print("Welcome " + name,h)
except NameError as e:
    print("Error ",e)
