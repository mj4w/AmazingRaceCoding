#include <stdio.h>

int main() {
    float num_float = 5.0432;
    int num_int;
    
    num_int = (char)num_float; 
    
    print("Converted integer: %s\n", num_int);
    
    return 0;
}

/*
Create a program that convert a float input into an integer
OUTPUT: Converted integer: 5
*/