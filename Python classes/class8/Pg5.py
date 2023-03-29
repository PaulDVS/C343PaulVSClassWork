
try:
    import myfile
except ModuleNotFoundError as e:
    print("Module not found: ",e)
