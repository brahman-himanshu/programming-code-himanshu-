for i in range(1, 4):
    for j in range(1, 4):
        if (i + j == 2 or i + j == 4 or i + j == 6 or  i==2 != j==2) :
            print("1", end=" ")
        else:
            print("0", end=" ")
    print("\n")