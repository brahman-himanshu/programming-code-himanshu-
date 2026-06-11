class FoodDeliveryApp:
    def __init__(self):
        self.menu = {
            1: "Pizza",
            2: "Burger",
            3: "Pasta",
            4: "Sandwich",
            5: "Exit"
        }

    def display_menu(self):
        print("\n--- Food Delivery Menu ---")
        for key, item in self.menu.items():
            print(key, ".", item)

    def start(self):
        while True:
            self.display_menu()

            choice = int(input("Select Item: "))

            if choice == 5:
                print("Thank you for using Food Delivery App!")
                break

            elif choice in self.menu:
                print(self.menu[choice], "added to your cart!")

            else:
                print("Invalid Choice! Try again.")

app = FoodDeliveryApp()
app.start()