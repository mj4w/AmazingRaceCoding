def fibonacci(n):
    if n <= 1:
        return n
    else:
        fib = [0, 1]
        for i in range(2, n + 1):
            fib.append(fib[-1] + fib[-2])
        # code here 
        # return fib[n]

n = int(input("Enter the value of n: "))
print("The", n, "th Fibonacci number is:", fibonacci(n))




"""
Create a Fibonacci sequence program that ask the user for the nth number.
"""