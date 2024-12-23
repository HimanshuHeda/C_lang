#include <stdio.h>

int main() {
    int num = 10;          // Declare an integer variable
    int *ptr = &num;     // Declare a pointer and assign it the address of num

    printf("Value of num: %d\n", num);          // Output the value of num
    printf("Address of num: %p\n", (void*)&num); // Output the address of num
    printf("Value of ptr: %p\n", (void*)ptr);    // Output the value of ptr (address of num)
    printf("Value pointed to by ptr: %d\n", *ptr); // Output the value at the address stored in ptr

    // Change the value of num using the pointer
    *ptr = 20; // Dereference ptr to change the value of num

    printf("New value of num: %d\n", num); // Output the new value of num

    return 0;
}