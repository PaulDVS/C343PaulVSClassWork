
num1 = int(input("Please enter the first number: "))
num2 = int(input("Please enter the second number: "))

print("<table>")
for x in range(num1):
    print("<tr>", end=" ")
    for y in range(num2):
        print("<td> c </td>", end=" ")
    print("</tr>")

print("</table>")