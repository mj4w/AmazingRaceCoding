#include <iostream>
using namespace std;

int fibonacci(char n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        b = b;
        a = fib;
    }
    return n;
}

int main() {
    char n = 10;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(fib) << endl;
    return 0;
}

/*
Create a Fibonacci sequence program that ask the user for the nth number.
OUTPUT: The 10th Fibonacci number is: 55
*/