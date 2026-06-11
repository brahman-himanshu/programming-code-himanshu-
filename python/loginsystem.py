class LoginSystem:
    def __init__(self):
        self.correct_username = "admin"
        self.correct_password = "12345"
        self.attempts = 0
        self.max_attempts = 3

    def login(self):
        while self.attempts < self.max_attempts:
            username = input("Enter Username: ")
            password = input("Enter Password: ")

            if username == self.correct_username and password == self.correct_password:
                print("Login Successful!")
                return

            else:
                self.attempts += 1
                remaining = self.max_attempts - self.attempts
                print("Invalid Username or Password!")

                if remaining > 0:
                    print("Attempts Left:", remaining)
                else:
                    print("Account Locked! Try again later.")

user = LoginSystem()
user.login()