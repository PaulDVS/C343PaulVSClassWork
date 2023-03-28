
l = [11,22,33,44,[11,22,33,44],[33,44,55,66],55,66,77]

s = [num for item in l for num in (item if isinstance(item,list) else (item,))]

max_val = max(s)


print(s)
print (max_val)

