text = "Hello World"

# Basic slicing
print(text[0:5])      # Hello  (characters from index 0 to 4)
print(text[6:11])     # World  (characters from index 6 to 10)

# Omitting start or end
print(text[:5])       # Hello  (start is 0)
print(text[6:])       # World  (end is end of string)

# Using step
print(text[::2])      # HloWrd (every 2nd character)
print(text[::-1])     # dlroW olleH (reverse the string)
