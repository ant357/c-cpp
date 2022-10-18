#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=1;i<=10;i++)
    a.push_back(i*10);
    cout<<"\n Reference operator [g] : a[2] ="<<a[2];
    cout<<"\nat: a.at(4) ="<<a.at(4);
    cout<<"\nfront(): a.front() = "<<a.front();
    cout<<"\nback: a.back()="<<a.back();
int *pos=a.data();
cout<<"\npos = "<<*pos;
}