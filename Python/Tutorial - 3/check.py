x = float(input("Enter Number: "))

if(x % 2) == 0 and x > 0:
    print("The number you entered is positive and even.")
elif(x % 2) == 0 and x < 0:
    print("The number you entered is negative and even.")
elif(x % 2) != 0 and x > 0:
    print("The number you entered is positive and odd.")
elif(x % 2) != 0 and x < 0:
    print("The number you entered is negative and odd.")
else:
    print("Please enter a non zero number.")
