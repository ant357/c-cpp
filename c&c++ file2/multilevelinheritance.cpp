#include <iostream>
using namespace std;
class A
{
public:
int a=10;
   void a1()
    {
        cout << "This is class A";
    }
};
class B : protected A
{
public:
    B()
    {
    cout << "\nThis is class B";
}
int dd(){
    cout<< a;
}
};
class c : public B
{
public:
    c()
    {
    cout << "\nclass c is deriving  first class A and then class B";}
};

int main()
{
    c obj;
    //obj.a();
    obj.dd();
    return 0;
}