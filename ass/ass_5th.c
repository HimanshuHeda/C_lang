// 5. wap a c program to compute quotient and reminder.

#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    // Input dividend and divisor
    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Compute quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Output results
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
