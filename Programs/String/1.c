#include <stdio.h>
#include <string.h>

int main() {
    char name[50]; // declare a character array to store the user input

    printf("Enter your name: "); // prompt the user to enter their name
    fgets(name, 50, stdin); // read the user input into the character array

    // remove the newline character from the end of the string
    name[strcspn(name, "\n")] = 0;

    printf("Hello, %s!\n", name); // print out the user's name

    return 0;
}
