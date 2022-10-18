#include<stdio.h>
#include<string.h>
int main()
{
     char str[20];
    printf("Enter String: ");
    gets(str);
    printf("String is: %s",str);
    printf("\nUppper string: %s",strupr(str));
    printf("\nLower string: %s",strlwr(str));
    return 0;
}