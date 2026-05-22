rows=5
for i in range(1, rows ):
    print(" " * (rows - i), end="")
    for j in range(i):
        print("*", end="") 
    print("\n")
  

# 2nd approach 
n=5
for i in range(n):
    for j in range (i,n):
        print(" ",end=" ")
        for j in range (i +1):
            print("*",end=" ")  