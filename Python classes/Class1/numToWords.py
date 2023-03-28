num = input("Please input the number: ")


for i in range(len(num)):
    j = len(num) - i
    x = (j)%3

    if(num[i] ==0):
        continue

    if(x == 0):
        if num[i] == "9":
            print("nine", end=" ")
        elif num[i] == "8":
            print("eight", end=" ")
        elif num[i] == "7":
            print("seven", end=" ")
        elif num[i] == "6":
            print("six", end=" ")
        elif num[i] == "5":
            print("five", end=" ")
        elif num[i] == "4":
            print("four", end=" ")
        elif num[i] == "3":
            print("three", end=" ")
        elif num[i] == "2":
            print("two", end=" ")
        elif num[i] == "1":
            print("one", end=" ")
        print("hundred", end=" ")
    elif(x == 2):
        if num[i] == "9":
            print("ninty", end=" ")
        elif num[i] == "8":
            print("eighty", end=" ")
        elif num[i] == "7":
            print("seventy", end=" ")
        elif num[i] == "6":
            print("sixty", end=" ")
        elif num[i] == "5":
            print("fifty", end=" ")
        elif num[i] == "4":
            print("fourty", end=" ")
        elif num[i] == "3":
            print("thirty", end=" ")
        elif num[i] == "2":
            print("twenty", end=" ")
        elif num[i] == "1":
            if num[i+1] == "9":
                print("ninteen", end=" ")
            elif num[i+1] == "8":
                print("eighteen", end=" ")
            elif num[i+1] == "7":
                print("seventeen", end=" ")
            elif num[i+1] == "6":
                print("sixteen", end=" ")
            elif num[i+1] == "5":
                print("fifteen", end=" ")
            elif num[i+1] == "4":
                print("fourteen", end=" ")
            elif num[i+1] == "3":
                print("thirteen", end=" ")
            elif num[i+1] == "2":
                print("twelve", end=" ")
            elif num[i+1] == "1":
                print("eleven", end=" ")
            elif num[i+1] == "0":
                print("ten", end=" ")
            i +=1
    elif (x == 1):
        if num[i] == "9":
            print("nine", end=" ")
        elif num[i] == "8":
            print("eight", end=" ")
        elif num[i] == "7":
            print("seven", end=" ")
        elif num[i] == "6":
            print("six", end=" ")
        elif num[i] == "5":
            print("five", end=" ")
        elif num[i] == "4":
            print("four", end=" ")
        elif num[i] == "3":
            print("three", end=" ")
        elif num[i] == "2":
            print("two", end=" ")
        elif num[i] == "1":
            print("one", end=" ")


        if len(num)>6 and j%7==0:
            print("million", end=" ")
        elif len(num)>3 and j%4==0:
            print("thousand", end=" ")

