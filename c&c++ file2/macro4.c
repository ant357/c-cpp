#include<stdio.h>
int fun()
{
    static int count =0;
     // int count=0;
    count++;
    return count;

}

int main()
{
    printf("%d",fun());
    printf("\n%d",fun());
    return 0;
}