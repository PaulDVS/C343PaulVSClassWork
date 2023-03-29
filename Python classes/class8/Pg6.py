
class point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

try:
    obj = point()
    obj.display()
except AttributeError as e:
    print("Error: ",e)