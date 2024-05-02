#include <iostream>
using namespace std;

int main() {
    float num_float;
    int num_int;
    
    cout << "Enter a float number: ";
    cin >> num_float;
    
    num_int = static_cast<int>(num_float); 
    
    cout << "Converted integer: " << num_int << endl;
    
    return 0;
}


/*
Create a program that convert a float input into an integer
*/