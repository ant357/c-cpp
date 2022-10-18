#include<iostream>
using namespace std;
void test( x){
    try{
        if(x>0)
        throw x;
        else
        throw 'x';
    }
    catch(int x){
        cout<<"Catch a integer and that integer is"<<x;
    }
    catch(char x)
    {
        cout<<"catch a character and that character is=a"<<x;
    }
}
int main(){
    char x;
    cin>>x;
test(x);
}