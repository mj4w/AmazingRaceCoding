#include <iostream>
using namespace std;

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
    cout << "Enter a number: ";
    cin >> num;
    if (is_prime(num))
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is a composite number" << endl;
    return 0;
}

/*
Create a program that determines if the number is a prime or composite number.
*/