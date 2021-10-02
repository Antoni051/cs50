import string

def main():
    number = getNum()
    checkInput(number)
    luhnsAlgo(number)
    print(checkType(number))

def getNum():
    while True:
        cardNum = input("Number: ")
        try:
            if len(cardNum) > 0 and int(cardNum):
                break
        except ValueError:
            continue
    return cardNum

def checkInput(number):
    length = len(number)
    if length < 13 or 16 > length or length == 15:
        print("Usage - Requires a Valid 13 , 15 or 16 digit number a")
        print(len(number))
        exit()    
    if str(number).isnumeric == False:
        print("Usage - Requires a Valid 15 or 16 digit number b")
        exit()  

def checkType(number):
    type = ""
    if int(number[0]) == 3:
        type = "AMEX"
    elif int(number[0]) == 5:
        type = "MASTERCARD"
    elif int(number[0]) == 4:
        type  = "VISA"
    return type

def luhnsAlgo(number):
    nDigits = len(number)
    sum = int(number[nDigits - 1])
    parity = (nDigits -1) % 2
    for i in range(0, (nDigits-2)):
        digit = int(number[i])
        if i % 2 == parity:
            digit *= 2
        if digit > 9:
            digit -= 9
        sum += digit
    if sum % 10 == 0:
        print("VALID")
    else:
        print("INVALID")
        exit()

main()