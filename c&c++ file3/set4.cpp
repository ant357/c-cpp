#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<int, map<int, string > > nested_map;
    nested_map[1][2]="one";
    cout<<nested_map[1][1]<<endl;
}