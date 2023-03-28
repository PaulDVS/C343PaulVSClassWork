import os
from pynput.keyboard import Key, Listener

puzzle = []
currX = 3
currY= 3
moves = 0

def clear_screen():
    os.system('cls')

def showPuzzle():
    print("-"+"-------" * 4)
    for x in puzzle:
        print("|", end = "")
        for y in x:
            print(" ",y," |", end = "")
        print()
        print("-" + "-------" * 4)

def moveLeft():
    global puzzle
    global currX
    global currY

    if currY == 0:
        return

    temp = puzzle[currX][currY]
    puzzle[currX][currY] = puzzle[currX][currY-1]
    puzzle[currX][currY-1] = temp
    currY = currY-1
    global moves
    moves += 1


def moveRight():
    global puzzle
    global currX
    global currY

    if currY == 3:
        return

    temp = puzzle[currX][currY]
    puzzle[currX][currY] = puzzle[currX][currY + 1]
    puzzle[currX][currY + 1] = temp
    currY = currY + 1
    global moves
    moves += 1

def moveUp():
    global puzzle
    global currX
    global currY

    if currX == 0:
        return

    temp = puzzle[currX][currY]
    puzzle[currX][currY] = puzzle[currX-1][currY]
    puzzle[currX-1][currY] = temp
    currX = currX - 1
    global moves
    moves += 1

def moveDown():
    global puzzle
    global currX
    global currY

    if currX == 3:
        return

    temp = puzzle[currX][currY]
    puzzle[currX][currY] = puzzle[currX+1][currY]
    puzzle[currX+1][currY] = temp
    currX = currX + 1
    global moves
    moves += 1

def on_press(key):
    if key == Key.esc:
        # Stop listener
        return False
    elif key == Key.left:
        moveLeft()
        clear_screen()
        showPuzzle()
    elif key == Key.right:
        moveRight()
        clear_screen()
        showPuzzle()
    elif key == Key.down:
        moveDown()
        clear_screen()
        showPuzzle()
    elif key == Key.up:
        moveUp()
        clear_screen()
        showPuzzle()

    return continueGameCheck()

def continueGameCheck():
    winCon =[[" 1"," 2"," 3"," 4"],[" 5"," 6"," 7"," 8"],[" 9","10","11","12"],["13","14","15","  "]]
    if puzzle == winCon:
        return False
    else:
        return True

#Main
    #Setup
puzzle = [[" 4","10"," 7"," 9"],[" 2"," 3","11","14"],[" 5"," 1","15","12"],[" 8","13"," 6","  "]]
#puzzle =[[" 1"," 2"," 3"," 4"],[" 5"," 6"," 7"," 8"],[" 9","10","12","15"],["13","14","11","  "]]

showPuzzle()
with Listener(
        on_press=on_press) as listener:
    listener.join()
print()
print("Moves =", moves)


