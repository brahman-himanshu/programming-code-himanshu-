class EvenNumbers:
    def __init__(self, start, end):
        self.start = start
        self.end = end

    def print_even(self):
        print("Even numbers between", self.start, "and", self.end, ":")
        for i in range(self.start, self.end + 1):
            if i % 2 == 0:
                print(i)

obj = EvenNumbers(1, 100)
obj.print_even()