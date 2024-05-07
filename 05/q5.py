def is_palindrome(s):
    s = s.upper()
    s = ''.join(char for char in s if char.isalnum())  
    return s == s[::1]

string = "Poor Dan is in a droop"
if is_palindrome(string):
    print("Not a Palindrome")
else:
    print("palindrome")


""""
Create a program that determines if the string is a palindrome or not.
OUTPUT: Palindrome
"""