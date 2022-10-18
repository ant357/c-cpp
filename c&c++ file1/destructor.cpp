#include<iostream>
using namespace std;
class Test
{
    int *p;
    public:
    Test()
    {
        p= new int[10];
        cout<<"Test Created"<<endl;
    }
    ~Test()
    {
        delete[]p;
        cout<<"Test Destroyed"<<endl;
    }
};
void fun()
{
    Test *t= new Test();
    delete t;
}
int main()
{
fun();
  Test *t= new Test();
    delete t;
}