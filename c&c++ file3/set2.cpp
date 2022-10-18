 #include <iostream>  
#include<set>
  using namespace std;
   int main(){
    set<string>string_set{"iphone","android","basic","landline"};
    set<char>chr_set{'a','b','c','d'};
    set<int>int_set{1,2,3,4,5};
    for(int i=0; i<4;i++){
        int_set.insert('a'+i);
    }
    cout<<"strng_set size:"<<string_set.size();
    cout<<endl;
    cout<<"strng_set size:"<<chr_set.size();
 return 0;
}