def s2f(x):
    # Converts string value to a floating point value
    # param x: string
    # returns x as float value.

    try:
        float(x)
        print("Conversion successful: ")
        return float(x)
    except ValueError:
        print("Invalid entry, value must be numeric.")

x = input("Enter Number: ")

y = s2f(x)

print(y)