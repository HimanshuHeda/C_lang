#include <stdio.h>

void modifyValue(int *ptr) {
    // Modify the value at the address pointed to by ptr
    *ptr = 20;
}

int main() {
    int num = 10; // Declare an integer variable
    printf("Before modification: num = %d\n", num);

    // Declare a pointer and assign it the address of num
    int *p = &num;

    // Call the function to modify the value using the pointer
    modifyValue(p);

    // Print the modified value
    printf("After modification: num = %d\n", num);

    return 0;
}