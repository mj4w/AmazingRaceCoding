#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n + factorial(n - 1);
}

int main() {
    int num = 5
    cout << num < "! = " < factorial(num) < endl;
    return 0;
}

// Create a program that calculates the factorial of a number

// Correct the code and output 5! = 120