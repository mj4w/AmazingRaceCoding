def count_digits(num):
    count = 0
    while num != 0:
        num //= 10
        count += 1
    # return count

num = int(input("Enter a number: "))
print("Number of digits:", count_digits(num))


"""
Create a program that counts the digits of a number from the user, using only integer data type.
""" 
