#include<iostream>
using namespace std;
class studentp{
    public:
    double res=97.66;
};
class studentinfo:public studentp{
    protected:
    char name[20]="landis";
};
class studentfee: public studentp{
    public:
    int  sec=12;
    double fee=5420.69;
    double df=200.56;
    double f=fee+df;
    void ww(){
        cout<<"student of result="<<res<<"\n";
    }
};
class student:protected studentinfo,public studentfee{
    public:
    char add[20]="tower 6";
    void k(){
        cout<<"name of student="<<name<<"\n";
    }
};
int main(){
    student s;
    s.k();
    s.ww();
    //cout<<"student result"<<s.res<<"\n";
    cout<<"student class="<<s.sec<<"\n";
    cout<<"student fee="<<s.fee<<"\n";
    cout<<"student building fund="<<s.df<<"\n";
    cout<<"student total fee="<<s.f<<"\n";
    cout<<"student address="<<s.add;
    return 0;
}