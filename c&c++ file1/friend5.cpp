#include<iostream>
using namespace std;
class A{
    public:
    int f(){}
};
class B{
    friend int A::f();
};
int main(){
    
    return 0;
}