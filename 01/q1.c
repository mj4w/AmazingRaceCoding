#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        // return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d! = %d\n", num, factorial(num));
    return 0;
}

// Create a program that calculates the factorial of a number

