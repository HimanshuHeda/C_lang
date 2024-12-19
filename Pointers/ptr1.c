#include <stdio.h>

void modifyArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        // Modify each element by adding 5
        *(arr + i) += 5; // or you can use arr[i] += 5;
    }
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};                 // Declare and initialize an array
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    printf("Before modification:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Call the function to modify the array using a pointer
    modifyArray(numbers, size);

    printf("After modification:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}