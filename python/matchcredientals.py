correct_username = "user"
correct_password = "12345"

username = input("Enter Username: ")
password = input("Enter Password: ")

if username == correct_username and password == correct_password:
    print("Login Successful!")
else:
    print("Invalid Username or Password!")