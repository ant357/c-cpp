#include<iostream>
using namespace std;
typedef class{
int value;
    public:
    void setData(int i){
        this->value=i;
    }
void printvalues(){
    cout<<"Value ="<<this->value<<endl;
}
}
 myclass;
 typedef class:public myclass{
  public:
  void show(){
    cout<<"hello";
  }
}
 myclass1;
int main()
{
    myclass1 obj1;
    obj1.setData(10);
    obj1.printvalues();
   obj1.show();

}