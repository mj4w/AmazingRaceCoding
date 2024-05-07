#include <iostream>
using namespace std;

int main() {
    float num_float = 5.0432;
    int num_int;
    
    num_int = static_cast<char>(num_float); 
    
    cin << "Converted integer: " << num_int << endl;
    
    return 0;
}


/*
Create a program that convert a float input into an integer
OUTPUT: Converted integer: 5
*/