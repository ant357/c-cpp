#include<stdio.h>
int addition();
int subtraction();
int main()
{
int result;
int (*ptr)();
ptr= &addition;
result= (*ptr)();
printf("The sum is %d",result);
int res;
int (*ptr)();
ptr= &subtraction;
res=(*ptr)();
printf("The subtraction is %d",res); 
}
int addition()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a, &b);
    return a+b;
}
int subtraction()
{
   int c,d;
    printf("Enter two numbers");
    scanf("%d %d",&c, &d);
    return c-d;  
}