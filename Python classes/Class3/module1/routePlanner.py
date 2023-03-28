stations = dict()

class stationNode:
    def __init__(self, name):
        self.name=name
        self.routes = []

    def addRoute(self, destination):
        self.routes.append(destination)

    def findRoute(self, destination, visited):
        temp = visited[:]

        if(self.name == destination):
            temp.append(self.name)
            tempRoute = []
            tempRoute.append(temp)
            return tempRoute

        if(self.name in visited):
            return

        routes = []
        temp.append(self.name)
        for x in self.routes:
            tempRoute = []
            tempRoute = (stations[x].findRoute(destination, temp))
            if(tempRoute != None):
                routes.extend(tempRoute)
        return routes


ch=0
while (ch!="-1"):
    print("Menu")
    print("1: Add Stations, 2: Add Routes, 3: Find Routes, -1: End")
    print("Please enter your choice")
    ch = input()
    print()

    if(ch=="1"):
        name = 0
        name = input("Please enter the next stations name, -1 to end ")
        while (name != "-1"):
            newNode = stationNode(name)
            stations[name] = newNode
            name = input("Please enter the next stations name, -1 to end ")
        print()

    elif(ch=="2"):
        continueAdd=0
        while (continueAdd != "-1"):
            source = input("Please enter the starting station ")
            destination = input("Please enter the destination station ")
            stations[source].addRoute(destination)

            continueAdd = input("Add a route? -1 to stop adding routes ")
        print()

    elif(ch=="3"):
        source = input("Please enter the starting station ")
        destination = input("Please enter the destination station ")
        routes = []
        visited = []
        routes.extend(stations[source].findRoute(destination, visited))

        print(routes)
        print()
