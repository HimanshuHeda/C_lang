// Count occurance of an element in an array 

#include <stdio.h>

int main() {
    int n, i, element, count = 0;
    int arr[100];

    // Prompt user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to count its occurrence
    printf("Enter the element to count its occurrence: ");
    scanf("%d", &element);

    // Count the occurrence of the element
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            count++;
        }
    }

    // Output the result
    printf("The element %d occurs %d times in the array.\n", element, count);
    
    return 0;
}


