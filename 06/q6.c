#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    return 0;
}


/*
Create a Fibonacci sequence program that ask the user for the nth number.

*/