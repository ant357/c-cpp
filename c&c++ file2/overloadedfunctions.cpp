#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
double sum(double a, double b)
{
    return a+b;
}
int main()
{
    cout<<"The sum is"<<sum(10,20);
    cout<<"\nThe double sum is "<<sum(20,30);
    return 0;
}