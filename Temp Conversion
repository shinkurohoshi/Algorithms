#F = C * 1.8 + 32
#C = F - 32 * 0.55

const_val = 32
ConvertVal = 1.8


def convertF(value):
    result = (value * ConvertVal) + const_val
    f = print(f"The converted Value in Farenheit is {result}")
    return f

def convertC(value):
    result = (value - const_val) / ConvertVal
    c = print(f"The converted Value in Celcius is {result}")
    return c
 
print("Conversion Program in Farenheit and Celcius \n")
temp = input("Enter the temperature in Celcius or F: ")
value = float(input("Enter the Value of the temperature: "))

match temp:
    case "F":
        convertF(value)
    case "C":
        convertC(value)
    case _:
        print("Write the correct temperature value")
