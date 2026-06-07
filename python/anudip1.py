import time

# Decorator function
def calculate_runtime(task):

    def inner_function(*numbers, **details):
        beginning = time.time()

        output = task(*numbers, **details)

        finishing = time.time()
        total_duration = finishing - beginning

        print(f"{task.__name__} executed in {total_duration:.4f} seconds")

        return output

    return inner_function


# Applying decorator
@calculate_runtime
def demo_task():
    time.sleep(2)
    print("Task completed")


demo_task()