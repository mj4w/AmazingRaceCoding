def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        # condition it note: using if statement
        # if num % i == 0:
            return False
    return True

num = int(input("Enter a number: "))
if is_prime(num):
    print(num, "is a prime number")
else:
    print(num, "is a composite number")



"""
Create a program that determines if the number is a prime or composite number.
"""