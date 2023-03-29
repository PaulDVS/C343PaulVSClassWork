
message = "My string"


def myFunction():
    print(message)
    print(message2)

def newFunction():
    try:
        val = val +1
        print(val)
    except UnboundLocalError as e:
        print("Error",e)

#myFunction()
newFunction()