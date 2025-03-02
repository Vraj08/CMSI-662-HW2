/*
    1. Avoid Overflow When Adding Signed Integers
    • CERT Number: INT32-C
    • Description: Integer overflows can cause unintended behavior, leading to 
      security vulnerabilities and crashes. To prevent this, we should always 
      check if adding two numbers would exceed the maximum limit before 
      performing the operation.
*/


#include <stdio.h>
#include <limits.h>

int safe_addition(int num1, int num2) {
    if (num1 > 0 && num2 > INT_MAX - num1) {
        printf("Overflow detected!\n");
        return -1; // Indicating an error
    }
    return num1 + num2;
}

int main() {
    int result = safe_addition(2000000000, 1500000000);
    if (result != -1) {
        printf("Result: %d\n", result);
    }
    return 0;
}