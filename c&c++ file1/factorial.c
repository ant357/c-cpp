#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
fact=fact*i;
    }
   printf("factorial of a number is = %d",fact*n);
    return 0;
}