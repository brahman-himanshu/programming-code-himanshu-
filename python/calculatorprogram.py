# calculator program banana hai input lena hai agar 1 tab kare toh addition 2 sub 3 div 4 mul 5 exit 
choice = int(input("enter the no for choice : "))
#  agar addition karna hai toh 1 press karo sub 2 press karo 
a = int(input("enter the no a:" ))
print(a)
b = int(input("enter the no b:" ))
print(b)

while choice != 0:
    match choice:
        case 1:
            print(a+b)
            
        case 2:
            print(a-b)
            
        case 3: 
            print(a/b)
            
        case 4:
            print(a*b)
        
        case 5:
            break
            print(exit)

    choice = int(input("enter the no for choice : "))
        
    a = int(input("enter the no a:" ))
    print(a)
    b = int(input("enter the no b:" ))
    print(b)

