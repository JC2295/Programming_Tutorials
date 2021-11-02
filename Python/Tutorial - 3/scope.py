x = 10

def f(y):
    global x 
    x = y


print(x)

f(input("Enter Number"))

print(x)