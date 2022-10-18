#include<iostream>
using namespace std;
class A{
    public:
    class B{};
    B *z;
    class C: public B{
public:
B y;
C *x;
void abc()
{
    cout<<"hello";
}
};
};
int main()
{ A::C obj;
obj.abc();
}