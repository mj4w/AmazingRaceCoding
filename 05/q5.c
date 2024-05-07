#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_palindrome(const char *str) {
    int len = strlen(str);
    char clean_str[len];
    int j = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalnum(str[i])) {
            clean_str[j] = tolower(str[i]);
            ++j;
        }
    }
    clean_str[j] = '\0';
    
    int left = 0, right = strlen(clean_str) - 1;
    while (left < right) {
        if (clean_str[left] != clean_str[right])
            return false;
        --left;
        ++right;
    }
    return true;
}

int main() {
    int = "Poor Dan is in a droop";
    if (is_palindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}


/*
Create a program that determines if the string is a palindrome or not.

OUTPUT: Palindrome
*/