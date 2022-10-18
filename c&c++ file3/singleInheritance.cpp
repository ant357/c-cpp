#include<iostream>
using namespace std;
class  A
{
  
public:
  A()
  {
    cout<<"This is base class";
  }
};
class B : private A
{
  public:
B()
{
  cout<<"\nClass B is  publicly deriving from class A";
}
};

int main()
{
B obj;
}