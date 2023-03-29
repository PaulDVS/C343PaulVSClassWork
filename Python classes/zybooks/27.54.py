
def guitarTabs(chordList):
    tabList = []
    tabList.append("e|-")
    tabList.append("B|-")
    tabList.append("G|-")
    tabList.append("D|-")
    tabList.append("A|-")
    tabList.append("E|-")

    for x in chordList:
        if (x == "G"):
            tabList[0] = tabList[0] + "3-"
            tabList[1] = tabList[1] + "0-"
            tabList[2] = tabList[2] + "0-"
            tabList[3] = tabList[3] + "0-"
            tabList[4] = tabList[4] + "2-"
            tabList[5] = tabList[5] + "3-"
        elif (x == "C"):
            tabList[0] = tabList[0] + "0-"
            tabList[1] = tabList[1] + "1-"
            tabList[2] = tabList[2] + "0-"
            tabList[3] = tabList[3] + "2-"
            tabList[4] = tabList[4] + "3-"
            tabList[5] = tabList[5] + "--"
        elif (x == "D"):
            tabList[0] = tabList[0] + "2-"
            tabList[1] = tabList[1] + "3-"
            tabList[2] = tabList[2] + "2-"
            tabList[3] = tabList[3] + "0-"
            tabList[4] = tabList[4] + "--"
            tabList[5] = tabList[5] + "--"

    return tabList

inputVal = input("Please input the vector: ")
vectorVal = inputVal.split(" ")

output = guitarTabs(vectorVal[1:])

for x in output:
    print(x)