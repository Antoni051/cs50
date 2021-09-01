def main():
    print(getPositiveInt())

def getPositiveInt():
    while True:
        i = int(input("Input an Integer: "))
        if i > 0:
            break
        return i

main()