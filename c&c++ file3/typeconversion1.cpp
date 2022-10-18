#include<iostream>
using namespace std;
typedef unsigned char BYTE;
void f()
{
    char ch;
    int i= -65;
    float f=2.5;
    double dbl;
    ch= static_cast<char>(i);
    dbl=static_cast<double>(f);
    i= static_cast<BYTE>(ch);
    cout<<ch<<'\n'<<dbl<<'\n'<<i;
}
int main()
{
    f();
}