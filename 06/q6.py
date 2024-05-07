def fibonacci(n):
    if n <= 1:
        return n
    else:
        fib = [0, 1]
        for i in range(1, n - 1):
            fib.append(fib[-1] + fib[-2])
        return fib

n = 10
print("The", n, "th Fibonacci number is:", fibonacci(n))




"""
Create a Fibonacci sequence program that ask the user for the nth number.
OUTPUT: The 10th Fibonacci number is: 55
"""