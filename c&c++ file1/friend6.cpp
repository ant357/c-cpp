#include<iostream>
using namespace std;
class A{
    friend class B;
    int a;
};
class B{ };
class C : public B{
    void f(A*P){}
};
int main()
{ 
    
    return 0;
}
