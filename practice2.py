
largest = None
smallest = None

while True:
    num = input("enter an int number")
    if num == 'done':
        break
    try:
        askInt = int(num)
    except:
        print("Invalid input")
        continue
    if smallest is None and largest is None:
        smallest = askInt
        largest = askInt
    elif askInt < smallest :
        smallest = askInt
    elif largest < askInt :
         largest = askInt
print("Maximum is", largest)
print("Minimum is", smallest)
