#include<iostream>
using namespace std;
 
int main()
{
    int var=0;
    cout<<"Simple c++ program for catch all";
//int a;
//cin>>a;
//a=a/0;
//cout<<"a is "<<a;
try{
    if(var==0)
    {
    throw var;}
}
catch(float ex)
{
    cout<<"exception catch"<<ex;
}
catch(int ex1)
{
    cout<<"\nexception catching landis gyr "<<ex1;
}

catch(...){
    cout<<"\nDefault Exception catch";
}

    return 0;
}
