#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=1;i<=5;i++)
    a.push_back(i);
    cout<<"size :"<<a.size();
    cout<<"\ncapacity"<<a.capacity();
cout<<"\nMax_Size :"<<a.max_size();
a.resize(4);
cout<<"\n"<<a.size();
if(a.empty()==false)
cout<<"\n Vector is not empty";
else
cout<<"\n Vector is empty";
return 0;
    }