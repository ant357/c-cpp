#include <iostream>
using namespace std;
int x = 20;
int *p;
void f()
{
    static int y = 10;
    //int *p;
    p=&y;
    int x;
    extern int g();
    class local
    {
    public:
        int h() { cout << y << "\n"; }
        int k() { return ::x; }
        int l() { return g(); }
    };
    // local l;
    // l.h();
    // cout << l.k();
}
int main()
{f();
std::cout<<*p;
    //local *z;
}
