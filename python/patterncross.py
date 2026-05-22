# isme hamne ye kiya ki hame cross print karwana tha algo ye hai ki left cross toh jab print hoga 
# jab rows or column equal ho or right wale ka sum 4 ho toh cross print ho jayega 

rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

for i in range(1, rows+1):
    for j in range(1, cols+1):
        if (i == j or i + j == rows + 1):
            print("*", end="  ")
        else:
            print(" ", end="  ")
    print("\n")
      