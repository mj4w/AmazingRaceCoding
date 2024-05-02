#include <stdio.h>

int main() {
    float num_float;
    int num_int;
    
    printf("Enter a float number: ");
    scanf("%f", &num_float);
    
    num_int = (int)num_float; 
    
    printf("Converted integer: %d\n", num_int);
    
    return 0;
}

/*
Create a program that convert a float input into an integer
*/