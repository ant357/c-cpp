#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<string> strng_set{"iphone","android","basic"};
    set<char> chr_set{'a','b','c','d'};
    set<int> int_set{1,3,4,5};
  
    for(auto kt=strng_set.begin();kt !=strng_set.end(); ++kt)
    cout<<' '<<*kt;
    for(auto kt=chr_set.begin();kt !=chr_set.end(); ++kt)
    cout<<' '<< *kt;
    for(auto kt=int_set.begin();kt !=int_set.end(); ++kt)
    cout<<' '<< *kt;
    return 0;
}