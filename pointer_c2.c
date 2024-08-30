#include <stdio.h>
int testPointer2()
{
    int x = 20, deref; // create a normal variable
    int *ptr;          // create a pointer variable
    ptr = &x;
    deref = *ptr;
    // Indirection or Dereferencing Operator (*)(asterisk)
    printf("Dereferrence");
    printf("Value of x: %d\n", x);                    // Value of x: 20
    printf("Put value at ptr in deref: %d\n", deref); // Put value at ptr in deref: 20
    printf("Address of x: %d\n", &x);                 // Address of x: 6422252
    printf("Address of dref: %d\n", &deref);          // Address of dref: 6422248
    printf("Address of ptr: %d\n", &ptr);             // Address of ptr: 6422244

    return 0;
}