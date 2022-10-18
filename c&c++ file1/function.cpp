#include<iostream>
using namespace std;
int addition(int a, int b)
{
    return a+b;
}
float addition(float a, float b)
{
    return a-b;
}
int main()
{
    int a=10,b=20;
    float m=20.0, n=10.0;
    cout<<"Addition is"<<addition(a,b);
    cout<<"\nsubtraction is"<<addition(m,n);
}