#include<iostream>
using namespace std;
class Car{
    public:
    virtual void start()=0;
    virtual void stop()=0;
    virtual void fun(){
        cout<<"\n";
    }
};
class Innova: public Car{
    public:
    void start()
    {
        cout<<"Innova Started"<<endl;
    }
    void stop()
    {
        cout<<"Innova Stopped"<<endl;
    }
};
class swift: public Car{
    public:
    void start()
    {
        cout<<"swift Started"<<endl;
    }
    void stop()
    {
        cout<<"swift Stopped"<<endl;
    }
};
int main()
{
Car *c = new Innova();
c->start();
c->stop();
c->fun();
c = new swift();
c->start();
c->stop();
return 0;
}