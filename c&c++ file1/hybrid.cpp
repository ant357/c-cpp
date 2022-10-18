#include <iostream>
using namespace std;
class A
{
    
protected:
int x=10;
   void a()
    {
        cout << "\nThis is class A";
    }
};
class B : public A
{
public:
  void  b()
    {
    cout << "\nThis is class B";}
};
class c : public A
{
public:
   void C()
    {
    cout << "\nclass c is deriving  both class A and B";}
};
class D: public c, public B
{
    public:
  void  d()
    {
        cout<<"\nD is deriving B and C";
          cout<<B::x;
    }
};

int main()
{
    D obj;
 
    obj.b();
    obj.C();
    obj.d();
     
    return 0;
}