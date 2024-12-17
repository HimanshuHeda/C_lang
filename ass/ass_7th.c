// 2. wap to swap 2 numbers

#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a, &b);
    printf("Before Swapping : a = %d, b = %d\n",a ,b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}