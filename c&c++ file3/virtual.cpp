#include<iostream>
using namespace std;
class Base{
    public:
    virtual void Display()
    {
        cout<<"Display of base"<<endl;
    }
};
class Derived: public Base
{
    public:
 void Display(){
cout<<"Display of derived"<<endl;
}
};
class Deriveed: public Base{
    public:
    void Display(){
        cout<<"display of derived 2";
    }
};
int main()
{
Base *p= new Derived();
p->Display();
Base *p1= new Deriveed();
p1->Display();
}