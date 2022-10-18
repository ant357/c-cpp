#include<iostream>
using namespace std;
template <class T>
T sum(T a, T b)
{
    T r;
    r=a+b;
    return r;
}
int main()
{
    int a=3,b=9;
    double n=9.8,m=6.8;
    cout<<sum<int>(a,b)<<"\n";
    cout<<sum<int>(n,m);
    return 0;
}