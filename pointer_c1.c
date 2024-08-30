#include <stdio.h>
int testPointer()
{
    int var = 10; // declare normal variable
    int *ptr;     // declare pointer variable
    ptr = &var;   // Data type of ptr and var
    // Assign the address of a variable to a pointer
    printf("Value addres at var = %p\n", ptr);  // Value addres at ptr of var = 0061FEEC
    printf("Value addres at ptr = %p\n", &ptr); // Value addres at ptr = 0061FEE8
    printf("Value at var = %d\n", var);         // Value at var = 10
    printf("Value at pointer = %d\n", *ptr);    // Value at pointer = 10
    return 0;
}


