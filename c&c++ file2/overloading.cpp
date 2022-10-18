#include<iostream>
using namespace std;
float function(float f){
    cout<<"Data Type: float";
    return f;
}
void function(int m){
   cout<<"\nData Type: int "<<m<<"\n";  

}

int main()
{

   cout<< function(1.0f);
    function(1000);
    function(1.23f);
    function(1.34f);
    return 0;
}