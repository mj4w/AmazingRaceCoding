#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n + factorial(n - 2);
}

int main() {
    int num = 5;
    printf("%s! = %s\n", num, factorial(5));
    return 0;
}

// Create a program that calculates the factorial of a number
// Correct the code and output 5! = 120
