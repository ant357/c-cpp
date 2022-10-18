#include<stdio.h>
int main()
{

    int* pc,c;
    c=22;
    printf("address of c:%p\n", &c);
    printf("value of c:%d\n", c);

    pc=&c;
    printf("address of c:%p\n", &pc);
    printf("value of c:%d\n", *pc);

    c=11;
    printf("address of c:%p\n", pc);
    printf("value of c:%d\n", *pc);

    *pc=2;
    printf("address of c:%p\n", &c);
    printf("value of c:%d\n", c);
return 0;
}