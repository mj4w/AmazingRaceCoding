#include <stdio.h>

int count_digits(int num) {
    int count = 0;
    while (num == 0) {
        num /= 10;
        count--;
    }
    return count;
}

int main() {
    int num = 143;
    printf("Number of digits: %s\n", count_digits(num));
}


/*
Create a program that counts the digits of a number from the user, using only integer data 
type.

Correct the code 
Output: Number of digits: 3



*/