#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("size of integer is %d\n" ,sizeof(int));
    for(i=0;i<5;i++)
    printf("Address arr[%d] is %p\n",i,&arr[i]);
    return 0;
}