#include<stdio.h>
int function(){
    char ch;

    printf("Alphabets from a - z are: \n");
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n",ch);
    }

    return 0; 
}

void main(){
    function();
}
