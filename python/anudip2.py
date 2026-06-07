def track_execution(work):
    call_total = 0

    def run_task(*data, **extra):
        nonlocal call_total
        call_total += 1

        print(f"{work.__name__} called {call_total} times")
        return work(*data, **extra)

    # Function to show total calls
    def total_calls():
        print(f"Total calls of {work.__name__}: {call_total}")

    run_task.total_calls = total_calls
    return run_task


# Applying decorator
@track_execution
def display_text():
    print("Function Running...")


# Function calls
display_text()
display_text()
display_text()

# Show total calls
display_text.total_calls()