#include <stdio.h>

int main() { 
    int n, i, sum = 0;
    int arr[100];

    // Prompt user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum of array elements
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
