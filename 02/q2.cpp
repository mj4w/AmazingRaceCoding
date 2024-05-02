#include <iostream>
using namespace std;

void multiplication_table() {
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main() {
    // multiplication_table();
    // return 0;
}


// Create a multiplication table that prints out table 1-10