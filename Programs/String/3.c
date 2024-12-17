#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i, length;
    printf("Enter a String : \n");
    scanf("%s",str);
    // Finding the length of a s without using strlen() begins
    length = 0;
    for ( i = 0; str[i] != '\0'; i++)
    {
        length++;
        printf("Length of %s=%d\n",str,length);
        length= strlen(str);
        printf("length of %s using strlen()=%d\n",str,length);
    }
    return 0;
}