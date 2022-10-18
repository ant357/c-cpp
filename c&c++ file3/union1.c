#include<stdio.h>
union unionjob
{
    char name[32];
    float salary;
    int workerNo;
} ujob;

struct structjob
{
    char name[32];
    float salary;
    int workerNo;
} sjob;
int main()
{
    printf("size of union = %d bytes", sizeof(ujob));
    printf("\nsize of structure = %d bytes", sizeof(sjob));
    return 0;
}