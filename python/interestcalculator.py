principal = float(input("Enter Principal Amount: "))
rate = float(input("Enter Rate of Interest: "))
time = float(input("Enter Time (in years): "))

si = (principal * rate * time) / 100

print("Simple Interest =", si)

ta = principal + si
print("Total Amount =", ta)