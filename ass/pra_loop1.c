// Write a program to sum of natural numbers entered by the user using FOR

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the entered number is a positive integer
    if (num < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of natural numbers using a for loop
    for (i = 1; i <= num; i++) {
        sum += i;
    }

    // Print the sum
    printf("Sum of natural numbers up to %d is: %d\n", num, sum);

    return 0;
}
