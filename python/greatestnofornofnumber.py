n = int(input("Enter how many numbers you want: "))

greatest = None  # variable to store greatest number

for i in range(n):
    num = int(input(f"Enter number {i+1}: "))
    if greatest is None:
        greatest = num  # first number becomes greatest initially
    elif num > greatest:
        greatest = num  # update if current number is greater
    # else condition not required — just ignore smaller numbers

print("Greatest number is:", greatest)
