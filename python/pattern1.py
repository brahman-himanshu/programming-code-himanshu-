num = 1
for i in range(1, 5):
    for j in range(1, i + 1):
        print(num, end=" ")
        num += 1
    print("\n")


    rows = 4


# print star from right side when i ki value increment then printing start bhu incremnet 

for i in range(1, rows + 1):
    
    # spaces (right alignment ke liye)
    print(" " * (rows - i), end="")
    
    # ye stars ke liye kara hai  
    for j in range(i):
        print("*", end="")
        
    print("\n")


# approach 1 using if or else 
rows = 4

for i in range(1, rows + 1):
    for j in range(i):
        print((i + j) % 2, end="")
    print()