#include<iostream>
using namespace std;
int main()
{
    int var =5;
    int *pointVar;
pointVar= &var;
cout<<"var ="<<var<<endl;
cout<<"*pointVar ="<<*pointVar<<endl<<endl;

return 0;
}