rootNode = []
currNode = []

class nodeFile:
    def __init__(self, name, parent):
        self.name = name
        self.parent = parent

    def getName(self):
        return self.name

    def pwd(self):
        return self.parent[0]

    def chFolder(self):
        global currNode
        print("Please input .. to move to parent folder: ")
        name = input()
        if(name==".." and currNode != rootNode):
            print("Moving to", self.parent[0].getName())
            currNode = self.parent
            return

        print("File not found")
        return

class nodeFolder:
    def __init__(self, name, parent):
        self.name = name
        self.parent = parent
        self.children = []

    def getName(self):
        return self.name

    def pwd(self):
        return self

    def listItems(self):
        return self.children

    def mkFolder(self):
        print("Please input folder name: ")
        name = input()
        newFolder= [nodeFolder(name, currNode)]
        self.children.append(newFolder)
        print("Folder", name, "made")

    def mkFile(self):
        print("Please input file name: ")
        name = input()
        newFile = [nodeFile(name, currNode)]
        self.children.append(newFile)
        print("File",name,"made")

    def chFolder(self):
        global currNode
        print("Please input folder/name to move to (.. to move to parent): ")
        name = input()
        if(name==".." and currNode != rootNode):
            print("Moving to", self.parent[0].getName())
            currNode = self.parent
            return

        for x in self.children:
            if (x[0].getName() == name):
                print("Moving to", name)
                currNode = x
                return
        print("File not found")
        return

#Main


rootNode = [nodeFolder("root", None)]
currNode = rootNode

ch=0
while (ch!="-1"):
    print("Menu")
    print("mkfolder: Make a folder, mkfile: Make a file, chfolder: Move to target folder/file (local)")
    print("chfolderroot: Move to root folder, listItems: List all items under pwd, pwd: Show current folder")
    print("-1: End")
    print("Please enter your choice")
    ch = input()
    print()

    if(ch=="mkfolder"):
        if(type(currNode[0]) == nodeFolder):
            currNode[0].mkFolder()
        else:
            print("Error, currently in file")
    elif(ch=="mkfile"):
        if (type(currNode[0]) == nodeFolder):
            currNode[0].mkFile()
        else:
            print("Error, currently in file")
    elif (ch == "chfolder"):
        currNode[0].chFolder()
    elif (ch == "chfolderroot"):
        currNode = rootNode
        print("Moved to root node")
    elif (ch == "listItems"):
        temp = currNode[0].pwd().listItems()
        for x in temp:
            print(x[0].getName())
    elif (ch == "pwd"):
        print(currNode[0].pwd().getName())
    elif(ch=="-1"):
        print("Thank you for using")
    else:
        print("Error, incorrect input")

    print()