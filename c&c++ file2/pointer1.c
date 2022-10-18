#include <stdio.h>  
#include<stdlib.h>
int main()  
{  
   int *ptr=(int *)malloc(sizeof(int));  
   int a=560;  
   ptr=&a; 
   printf("value is %d",a); 
   free(ptr); 
   printf("value is %d",a);
   return 0;  
}  
