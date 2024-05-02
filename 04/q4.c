#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        // condition it note: using if statement
        // if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_prime(num))
        printf("%d is a prime number\n", num);
    else
        printf("%d is a composite number\n", num);
    return 0;
}


/*
Create a program that determines if the number is a prime or composite number.
*/