// Print table for the given number using C for loop using FOR

#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print the multiplication table using a for loop
    printf("Multiplication table for %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
