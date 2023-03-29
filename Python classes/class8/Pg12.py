
try:
    file = open("myfile.txt","r")

    file.close()
except FileNotFoundError as e:
    print("Error",e)