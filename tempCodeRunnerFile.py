askAmount = input("Enter the Amount\n")
askBal = input("Enter the Ballance\n")


try :
    intAmount = int(askAmount)
    intBal = float(askBal)
except : 
    intAmount= -1
    intBal = -1

if intAmount > 0 and intBal > 0:
    if intAmount % 5 == 0 and intBal >= (intAmount + 0.50) :
        print('transaction complete')
        print("remaining ballance",intBal - (intAmount + 0.50))
    else:
        print("remaining ballance",intBal)

else :
    print("Enter Valid Nmber")  