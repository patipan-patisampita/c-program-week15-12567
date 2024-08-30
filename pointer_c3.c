#include <stdio.h>
int testPointer3()
{
    int num = 10; // Declare integer variable number
    int *ptr;     // Declare pointer to store address of number
    ptr = &num;   //& (Ampersand) operator

    printf("Value of num = %d\n", num);               // Print the Value of num = 10
    printf("Addres of num = %d\n", &num);             // Address of num  using & operator = 6422248
    printf("Addres stored in ptr = %p\n", ptr);       // Addres stored in ptr = 0061FEE8
    printf("Dereference value of *ptr = %d\n", *ptr); // Dereference value of *ptr = 10
    
    *ptr = 6;                                         // Modify the content in the address to 6 using pointer
    printf("Dereference value of *ptr = %d\n", *ptr); // Dereference value of *ptr = 6
    printf("Value of number = %d\n", num);            // Value of number = 6

    num = 20;                                        // Modify the content in the vcalue to 20 using variable
    printf("Dereference value of *ptr = %d\n", *ptr); // Dereference value of *ptr = 20
    printf("Value of number = %d\n", num);            // Value of number = 20
    return 0;
}