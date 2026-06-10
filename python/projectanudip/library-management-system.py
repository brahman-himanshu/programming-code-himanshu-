from datetime import datetime, timedelta

class Book:
    def __init__(self, book_id, title):
        self.book_id = book_id
        self.title = title
        self.available = True

class Library:
    def __init__(self):
        self.books = {}
        self.issued_books = {}

    def add_book(self, book_id, title):
        if book_id in self.books:
            print("Book ID already exists!")
        else:
            self.books[book_id] = Book(book_id, title)
            print("Book added successfully!")

    def display_books(self):
        print("\n--- Library Books ---")
        for book in self.books.values():
            status = "Available" if book.available else "Issued"
            print(f"ID: {book.book_id} | Title: {book.title} | Status: {status}")

    def issue_book(self, book_id, student_id):
        if book_id not in self.books:
            print("Book not found!")
            return

        book = self.books[book_id]

        if not book.available:
            print("Book already issued!")
            return

        issue_date = datetime.now()
        due_date = issue_date + timedelta(days=7)

        self.issued_books[book_id] = {
            "student_id": student_id,
            "issue_date": issue_date,
            "due_date": due_date
        }

        book.available = False

        print("\nBook Issued Successfully!")
        print("Book ID:", book_id)
        print("Student ID:", student_id)
        print("Issue Date:", issue_date.strftime("%d-%m-%Y"))
        print("Due Date:", due_date.strftime("%d-%m-%Y"))

    def return_book(self, book_id):
        if book_id not in self.issued_books:
            print("This book was not issued!")
            return

        return_date = datetime.now()
        issue_info = self.issued_books[book_id]
        due_date = issue_info["due_date"]

        fine = 0

        if return_date > due_date:
            late_days = (return_date - due_date).days
            fine = late_days * 10

        self.books[book_id].available = True
        del self.issued_books[book_id]

        print("\nBook Returned Successfully!")
        print("Return Date:", return_date.strftime("%d-%m-%Y"))
        print("Fine Amount: ₹", fine)

# Main Program

library = Library()

while True:
    print("\n========== LIBRARY MANAGEMENT SYSTEM ==========")
    print("1. Add Book")
    print("2. Display Books")
    print("3. Issue Book")
    print("4. Return Book")
    print("5. Exit")

    choice = input("Enter Choice: ")

    if choice == "1":
        book_id = input("Enter Book ID: ")
        title = input("Enter Book Title: ")
        library.add_book(book_id, title)

    elif choice == "2":
        library.display_books()

    elif choice == "3":
        book_id = input("Enter Book ID: ")
        student_id = input("Enter Student ID: ")
        library.issue_book(book_id, student_id)

    elif choice == "4":
        book_id = input("Enter Book ID: ")
        library.return_book(book_id)

    elif choice == "5":
        print("Thank You!")
        break

    else:
        print("Invalid Choice!")