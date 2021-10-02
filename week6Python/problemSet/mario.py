
height = int(input("How tall: "))

for i in range(0 , height):
    for j in range(height , 0, -1):
        if (j+i) > (height-1):
            print("#", end="")
    print("")