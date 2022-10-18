#include<iostream>
#include<iterator>
#include<list>
using namespace std;
void showTheContent(list<int> l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<"\n";
}
int main()
{
    list<int> list1, list2;
    int i;
    for(i=0;i<10;i++)
    list1.push_back(i+1);
    for(i=0;i<10;i++)
    list2.push_front(i+1);
    cout<<"Content of list 1:";
    showTheContent(list1);
    cout<<"Content of list 2:";
    showTheContent(list2);
    list2.sort();
    cout<<"sorted List2 :";
    showTheContent(list2);
int times =5;
while(times--)
{
    list1.pop_front();
}
cout<<"Content of list 1:";
showTheContent(list1);
times=5;
while(times--)
{
    list2.pop_back();
}
cout<<"Content of list 2:";
showTheContent(list2);
cout<<list1.front()<<"is now at the front in list1 \n";
cout<<list2.back()<<"is now at the front in list2 \n";
list1.insert(list1.begin(),5,10);
cout<<"After insertion list 1:";
showTheContent(list1);
list1.remove(10);
cout<<"After Removal list 1 :";
showTheContent(list1);
cout<<"No. of elements in list 1:";
cout<<list1.size()<<"\n";
list2.reverse();
cout<<"Reverse list 2";
showTheContent(list2);
}