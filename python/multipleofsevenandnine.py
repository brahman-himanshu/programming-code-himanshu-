num = int(input("Enter a number: "))

if num % 7 == 0 and num % 9 == 0:
    print(f"{num} is a multiple of both 7 and 9")
elif num % 7 == 0:
    print(f"{num} is a multiple of 7")
elif num % 9 == 0:
    print(f"{num} is a multiple of 9")
else:
    print(f"{num} is not a multiple of 7 or 9")
