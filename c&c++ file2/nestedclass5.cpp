#include<iostream>
using namespace std;
class A{
    public:
    int m,n;
    A() : n(10),m(10){}
};
int main()
{
    A a;
    cout<<a.n<<endl;
    cout<<a.m<<endl;
}