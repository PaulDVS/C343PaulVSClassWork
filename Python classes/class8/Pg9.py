
mydict = dict()
mydict["key1"] = "hello"
mydict["key2"] = "hi"
mydict["key3"] = "how are you"

try:
    print(mydict["john"])
except KeyError as e:
    print("Error",e)