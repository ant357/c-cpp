#include<iostream>
using namespace std;
struct a {
    virtual void f(){ cout<<"Class A"<<endl;
 } };
    struct b:a{
        void f() {
            cout<<"Class B"<<endl;}
        };
        void g(a& arg){
            arg.f();
        }
int main()
{
b x;
g(x);
}