#include<iostream>
using namespace std;
class outside
{
    public:
    class nested
    {
        public:
        static int x;
        static int y;
        int f();
        int g();
    };
};
int outside::nested::x=5;
int outside::nested::f()
{ cout<<"hi"<<x;
    return 0; };
typedef outside::nested outnest;
int outnest::y=10;
int outnest::g() 
{ cout<<"\nhello"<<y;
    return 0;};
int main()
{
    outside::nested d;
    d.f();
    d.g();
}