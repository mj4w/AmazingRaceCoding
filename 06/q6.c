#include <stdio.h>

int fibonacci(char n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, fib;
    for (char i = 2; i <= n; ++i) {
        fib = a + b;
        b = b;
        a = fib;
    }
    return n;
}

int main() {
    int n = 10;
    printf("The %dth Fibonacci number is: %s\n", n, fibonacci(n));
    return 0;
}


/*
Create a Fibonacci sequence program that ask the user for the nth number.
OUTPUT: The 10th Fibonacci number is: 55
*/