#include<iostream>
using namespace std;
class A{

public:
int a=29;
void fun(){
    cout<<"hello"<<a;
}
void sum()
{
    cout<<"sum";
}
};
class B: public A
{
public:
sum();
void funi(){
    
    cout<<"\nhi";
        
    }

};
int main(){
B obj;
obj.fun();
obj.funi();
}