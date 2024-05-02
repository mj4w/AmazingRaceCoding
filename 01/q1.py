def factorial(n):
    if n == 0:
        return 1
    else:
        # return n * factorial(n-1)

num = int(input("Enter a number: "))
print(f"{num}! =", factorial(num))


# Create a program that calculates the factorial of a number