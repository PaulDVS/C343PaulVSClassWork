import sys
l = [1,2,3]

i= iter(l)
try:

    print(i)
    print(next(i))
    print(next(i))
    print(next(i))
    print(next(i))
    print(next(i))
    print(next(i))
except StopIteration as e:
    print("Exception " ,e)
except AttributeError as e:
    print("Attribute exception ",e)
finally:
    print(" this is justa  line")


