#include<iostream>
using namespace std;
int add(int a){
    int b=10;
}
int add(int a,int b=10)
{
    return a+b;
}
int main(){
    int a=5,b=10;
    cout<<"a+b ="<<add(a,b);
}