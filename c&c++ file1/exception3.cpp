#include<iostream>
using namespace std;
void exceptionFunction()
{
    try{
        throw 0;
    }
    catch(int i)
    {
        cout<<"\nIn Function : Wrong Input:"<<i;
        throw;
    }
}
int main()
{
    int var=0;
    cout<<"\nSimple c++ program for Rethrowing exception";
    try{
        exceptionFunction();
    }
    catch(int ex)
    {
        cout<<"\nIn main: Wrong Input:"<<ex;
    }
    return 0;
}