# Paul van Sittert 27.3.23
import tkinter
from tkinter import *
from tkinter.filedialog import askopenfile

logo=""
menuItems = 1
navTextbox = []
subSections = []
sub_section_Frame = []

def addMenubox():
    global navTextbox
    global menuItems

    if menuItems == 4:
        return

    menuItems += 1

    for x in range(0, menuItems):
        colVal = 8-menuItems+x
        navTextbox[x].grid(row=0, column= colVal, padx=10, pady=10)

def logoInput():
    global logo
    filepath = askopenfile(mode="r", filetypes=[('Image Files', '*jpeg', '*png')])
    logo = "file://" + filepath.name

def addSubsection(event):
    global sub_section_Frame
    global subSections
    num = int(section_num_subsections_Entry.get())
    if num>5:
        num = 5
    if num < 0:
        num = 0

    subSections = subSections[:num]

    for x in range(num, len(sub_section_Frame)):
        sub_section_Frame[x].destroy()
    sub_section_Frame = sub_section_Frame[:num]

    for x in range(len(sub_section_Frame)+1,num+1):
        rval=1+(2*x)

        sub_section_Frame.append(Frame(body_Frame, bg="#105DAA"))
        sub_section_Frame[x-1].grid(row=rval, column=0, columnspan = 2, padx=10, pady=15)

        for y in range(2):
            sub_section_Frame[x-1].grid_columnconfigure(y, minsize=450)

        sub_section_lable = Label(sub_section_Frame[x-1], text="Subsection 1."+str(x), width=25, bg="#6EB3F7")
        sub_section_lable.grid(row=0, column=0, padx=10, pady=10)

        sub_section_content_lable = Label(sub_section_Frame[x-1], text="SECTION CONTENT:", width=25, bg="#6EB3F7")
        sub_section_content_lable.grid(row=2, column=0, padx=10, pady=10)

        subSections.append(Text(sub_section_Frame[x-1], width=25, height=10, bg="#6EB3F7"))
        subSections[x-1].grid(row=2, column=1)

        filler_lable = Label(sub_section_Frame[x-1], height=1, bg="#105DAA")
        filler_lable.grid(row=4, column=0)

    win.update()
    c.config(scrollregion=c.bbox("all"))

def formatText(inputText):
    textlist = inputText.splitlines()
    returnList = []

    for x in textlist:
        templist = x.split(":")

        if(len(templist)<2):
            continue

        #Add command
        if(len(templist[0])>7 and templist[0][:7] == "heading"):
            returnList.append("<center><h"+templist[0][8]+">" + templist[1] + "</h"+templist[0][8]+"></center>")
        elif(templist[0]=="p"):
            returnList.append("<center><p>" + templist[1] + "</p></center>")
        else:
            returnList.append("<center><p>" + templist[1] + "</p></center>")

    return returnList


def submit():
    file = open("myPage.html", "w")

    file.write("<html style='background-color:#1E20CB'>")
    file.write("    <head><title>MyPage</title></head>")
    file.write("    <body>")

    #Create head
    file.write("        <div id='header' style='background-color:#1E76CB'>")
    file.write("            <div id='image'style='width: 200px;margin-left:25px;margin-top:25px;margin-bottom:25px;display: inline-block;'>")
    file.write("                <img src='"+logo+"' style='width:75px; height:75px;'>")
    file.write("            </div>")
    file.write("            <div id='navbar'style='display: inline-block;'>")

    for x in range(menuItems):
        file.write("                <div style='width: 200px;display: inline-block;'>")
        file.write("                    <center><h2 style='background-color:#6EB3F7'>"+navTextbox[x].get()+"</h2></center>")
        file.write("                </div>")

    file.write("            </div>")
    file.write("        </div>")

    #Create main body

    file.write("		<div id='Section'>")
    file.write("			<div id='Section content'>")

    templist = formatText(section_content_textbox.get("1.0", END))

    for x in templist:
        file.write("				<center>"+x+"</center>")

    file.write("            </div>")

    # Subsections
    file.write("			<div id='subsection'>")
    file.write("			    <center>")
    for x in range(len(subSections)):
        width = 90 / len(subSections)
        file.write("			       <div id='subsection"+str(x)+"' style='background-color:#1E76CB;display: inline-block;width:"+str(width)+"%'> ")

        templist = formatText(subSections[x].get("1.0", END))

        for x in templist:
            file.write("			          <center>" + x + "</center>")

        file.write("			        </div>")
    file.write("			    </center>")
    file.write("            </div>")

    file.write("        </div>")

    file.write("    </body>")
    file.write("</html>")
    file.close()

#Tkinter Set up
win = Tk()
win.title("HTML Creator")
win.config(bg="#1E20CB")
win.geometry("1200x500")

vscrollbar = Scrollbar(win)

c= Canvas(win,bg="#1E20CB",yscrollcommand=vscrollbar.set)

vscrollbar.config(command=c.yview)
vscrollbar.pack(side=RIGHT, fill=Y)

root=Frame(c, bg="#1E20CB") #Create the frame which will hold the widgets

c.pack(side="left", fill="both", expand=True)

#Updated the window creation
c.create_window(0,0,window=root, anchor='nw')

#Header
header_Frame = Frame(root, width=100, height=50, bg="#1E76CB")
header_Frame.grid(row=0, column=0, padx=10, pady=10)

for x in range(8):
    header_Frame.grid_columnconfigure(x, minsize=125)

#Top left is image input for logo
buttonLogo = Button(header_Frame, text="Logo input", bg="#6EB3F7", font=("Times",18), command=logoInput)
buttonLogo.grid(row=0, column=0, padx=10, pady=10)


navTextbox.append(Entry(header_Frame, font=("Times",18), bg="#6EB3F7", width=8, textvariable = str))
navTextbox[0].grid(row=0, column=7, padx=10, pady=10)

navTextbox.append(Entry(header_Frame, font=("Times",18), bg="#6EB3F7", width=8, textvariable = str))
navTextbox.append(Entry(header_Frame, font=("Times",18), bg="#6EB3F7", width=8, textvariable = str))
navTextbox.append(Entry(header_Frame, font=("Times",18), bg="#6EB3F7", width=8, textvariable = str))

buttonNavAdd = Button(header_Frame, text="+", bg="#6EB3F7", font=("Times", 18), command=addMenubox)
buttonNavAdd.grid(row=0, column=8, padx=10, pady=10)

#Content Input
body_Frame = Frame(root, width=1000, height=400, bg="#1E76CB")
body_Frame.grid(row=1, column=0, padx=10, pady=10)

section_Frame = Frame(body_Frame, width=900, bg="#1E76CB")
section_Frame.grid(row=1, column=0, padx=10, pady=10)

for x in range(2):
    section_Frame.grid_columnconfigure(x, minsize=450)

section_lable = Label(section_Frame, text="ADD SECTION", width=25, bg="#6EB3F7")
section_lable.grid(row=0, column=0)

    #Num subsections
section_num_subsections_label = Label(section_Frame, text="NUM OF SECTION:", width=25, bg="#6EB3F7")
section_num_subsections_label.grid(row=1, column=0)


section_num_subsections_Entry = Entry(section_Frame, font=("Times",18), bg="#6EB3F7", width=8, textvariable = int)
section_num_subsections_Entry.bind("<FocusOut>", addSubsection)
section_num_subsections_Entry.grid(row=1, column=1, padx=10, pady=10)

    #Section content
section_content_lable = Label(section_Frame, text="SECTION CONTENT:", width=25, bg="#6EB3F7")
section_content_lable.grid(row=2, column=0)

section_content_textbox = Text(section_Frame, width=25, height=10, bg="#6EB3F7")
section_content_textbox.grid(row=2, column=1)

#Submit button
buttonSubmit = Button(root, text="Submit", bg="#6EB3F7", font=("Times", 18), command=submit)
buttonSubmit.grid(row=2, column=0, padx=10, pady=10)

#Main
root.mainloop()
