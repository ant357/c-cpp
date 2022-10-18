#include<iostream>
using namespace std;
class OverLoad{
    private:
    int a;
    int b;
    public:
    OverLoad():a(0),b(0){}
    void in()
    {
        cout<<"Enter the first number";
        cin>>a;
        cout<<"Enter the second number";
        cin>>b;
    }
    void operator-- ()
    {
        a=--a;
        b=--b;
    }
   
    void out(){
cout<<"The decremented elements of the object"<<a+b;

    }
    void out2(){
cout<<"\nThe multiplication elements of the object"<<a*b;

    }
};
int main()
{
    OverLoad obj;
    obj.in();
    --obj;

    obj.out();
    obj.out2();
    


}