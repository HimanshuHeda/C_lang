#include<stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
}; // semicolon is needed here

int main(void) {
    struct emp e;
    
    printf("Enter empno, name and salary of the employee \n");
    scanf("%d %s %f", &e.empno, &e.name, &e.salary); // remove & before e.name
    
    printf("Details of the employee: \n");
    printf("%6d %15s %.2f\n", e.empno, e.name, e.salary); // add space between %15s and %.2f for better formatting
    
    return 0;
}