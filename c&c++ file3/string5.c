#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter String: ");
    gets(str);
    printf("String is: %s",str);
    printf("\nReverse string: %s",strrev(str));
    return 0;

}