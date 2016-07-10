import turtle
def tree(branchLen,p):
if branchLen > 5:
p.forward(branchLen)
p.right(20)
tree(branchLen-15,p)
p.left(40)
tree(branchLen-15,p)
p.right(20)
p.backward(branchLen)
def main():
p = turtle.Turtle()
myWin = turtle.Screen()
p.left(90)
p.up()
p.backward(100)
p.down()
p.color("green")
tree(75,p)
myWin.exitonclick()
main()
