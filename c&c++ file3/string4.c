#include<stdio.h>
#include<string.h>
void displayString(char str[])
{
    printf("String Output:");
    puts(str);
}

int main()
{
    char str[50];
    printf("Enter String:");
    fgets(str, sizeof(str),stdin);
    displayString(str);
return 0;
}

