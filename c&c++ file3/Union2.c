#include<stdio.h>
union unionjob
{
    char name[32];
    float salary;
    int workerNo;
} j;
int main()
{
    j.salary= 12.3;
    printf("Salary = %.1f\n",j.salary);
    j.workerNo = 100;
    printf("Salary = %.1f\n",j.salary);
    printf("Number of workers = %d",j.workerNo);
    return 0;
}