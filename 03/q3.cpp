#include <iostream>
using namespace std;

int count_digits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    // return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of digits: " << count_digits(num) << endl;
    return 0;
}


/*
Create a program that counts the digits of a number from the user, using only integer data 
type.

*/