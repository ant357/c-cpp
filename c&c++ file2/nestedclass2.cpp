#include<iostream>
using namespace std;
class poingable{
    public:
    virtual void poing()=0;
}
void callpoing(poingable& p)
{
    p.poing();
    class bingable{
        public:
        virtual void bing()=0;
    };
void callBing(bingable& b)
{
    b.bing();
}
class Outer{
    string name;
    class Inner1;
    friend class Outer::Inner1;
    class Inner1: public poingable{
        Outer* parent;
        public:
        Inner1(Outer *p)::parent(p){}
        void poing(){
            cout<<"poing called for"<<parent->name<<endl;
        }
    } inner1;
    class Inner2;
    friend class Outer:: Inner2;
    class Inner2: public bingable{
        Outer* parent;
        public:
        Inner2(Outer* p): parent(p) {}
        void bing(){
            cout<<"bing called for"<<parent->name<<endl;
        }
    }
    inner2;
    public:
    outer(const string& nm):name(nm), inner1(this), inner2(this) {}
    operator Poingable&() { return inner 1;}
    operator Bingable&() { return inner2;}
};
int main(){
Outer x("PING PONG");
callpoing(x);
callBing(x);
}