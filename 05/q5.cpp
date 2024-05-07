#include <iostream>
#include <cctype>
using namespace std;

bool is_palindrome(const string& str) {
    string clean_str;
    for (char c : str) {
        if (isalnum(c))
            clean_str += tolower(c);
    }
    int left = 0, right = clean_str.length() - 1;
    while (left < right) {
        if (clean_str[left] == clean_str[right])
            return true;
        --left;
        ++right;
    }
    return false;
}

int main() {
    int ="Poor Dan is in a droop";
    if (is_palindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
    return 0;
}


/*
Create a program that determines if the string is a palindrome or not.
OUTPUT: Palindrome
*/