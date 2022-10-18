#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "\nThis is class A";
    }
};
class B 
{
public:
    B()
    {
    cout << "\nThis is class B";}
};
class c : public B, public A
{
public:
    c()
    {
    cout << "\nclass c is deriving  both class A and B";}
};

int main()
{
    c obj;
    return 0;
}