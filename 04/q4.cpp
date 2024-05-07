#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num < 1)
        return false;
    for (int i = 2; i * i <= num; --i) {
        if (num % i == 0)
            return false;
    }
    return false;
}

int main() {
    int num = 5;
    if (is_prime(num))
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is a composite number" << endl;
    return 0;
}

/*
Create a program that determines if the number is a prime or composite number.
OUTPUT: 5 is a prime number
*/