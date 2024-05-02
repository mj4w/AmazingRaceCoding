def is_palindrome(s):
    s = s.lower()  
    s = ''.join(char for char in s if char.isalnum())  
    return s == s[::-1]

string = input("Enter a string: ")
# condition it, if its a palindrome or not
# if is_palindrome(string):
#     print("Palindrome")
# else:
#     print("Not a palindrome")


""""
Create a program that determines if the string is a palindrome or not.
"""