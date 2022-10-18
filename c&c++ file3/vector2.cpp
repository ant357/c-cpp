#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define row 3
#define col 3
int main()
{
    vector<vector<int> >a;
    int num=10;
    for(int i=0;i<row;i++){
    vector<int> a1;
    for(int j=0;j<col;j++){
    a1.push_back(num);
    num +=5;
    }
    a.push_back(a1);
    }
     for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
     }cout<<"\n";
     }
     cout<<a[1].size();
     a[2].pop_back();
     a[1].pop_back();
     a[0].pop_back();
      cout<<a[1].size();
     cout<<"\n2D vector traversional after deletion"<<"\n";
      for(int i=0;i<a.size();i++){
      for(auto it=a[i].begin();
      it !=a[i].end();it++){
        cout<<*it<<" ";
     }cout<<"\n";}

     cout<<"\n2D vector traversional after deletion"<<"\n";
      for(int i=0;i<a.size();i++){
      for(int j=0;j<a[i].size();j++){
        cout<<a[i][j]<<" ";
     }cout<<"\n";}
     cout<<a[1][2];
}