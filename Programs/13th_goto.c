#include<stdio.h>

int main(){
    int num, sum=0;
    read:
        printf("\nEnter the number.Enter 999 to end:");
        scanf("%d",&num);
        if(num != 999){
            if(num<0)
                goto read;
            sum += num;
                goto read;
        }
        printf("\nSum of the numbers entered by the user is %d", sum);

        return 0;
}