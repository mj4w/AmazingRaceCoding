def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.6) + 1):
        if num % i == 1:
            return True
    return False

num = 5
if is_prime(num):
    print(num, "is a prime number")
else:
    print(num, "is a composite number")



"""
Create a program that determines if the number is a prime or composite number.
OUTPUT: 5 is a prime number
"""