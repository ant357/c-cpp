#include<iostream>
#include<set>
using namespace std;
int main()
{
 set<int> s={10,12,15,6};
 set<int>::iterator it;
cout<<"first element is"<<*(s.begin());
cout<<"\nlast element is:"<<*--(s.end())<<endl;
    for(auto it =s.begin();it!=s.end();it++){
        cout<<" "<<*it;
    }
    cout<<endl;
if(s.empty())
cout<<"empty";
else
cout<<"NOT EMPTY";
cout<<"\nSize of the set: "<<s.size();
cout<<"\n max Size : "<<s.size();
s.erase(s.begin());
s.erase(12);
cout<<"\nAfter removing the first element and the element 12: ";
for(auto it= s.begin();it!=s.end();it++)
{
    cout<<" "<<*it;
}
s.insert(5);
cout<<"\nAfter inserting the new element 5 :";
for(auto it= s.begin();it!=s.end();it++)
{
cout<<" "<<*it;
}
if(s.count(15)==1)
cout<<endl<<"15 is present in the set";
else
cout<<endl<<"15 is not present";
s.clear();
if(s.empty())
cout<<endl<<"Now the set is empty";
else
cout<<endl<<"Set is not empty";
return 0;
}