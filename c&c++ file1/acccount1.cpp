#include <iostream>
using namespace std;
class Bank {
    public:
    int usr;
    void fun(){
    cout<<"Login";
    cin>>usr;
    void search()
    {
        int a;
        if(usr==a)
        {
            cout<<"found";
        }
    }    } 
    void fun1(){
    cout<<"Create account";

    }
};
class olduser: public Bank{
  private:
    
    char name[30];
    long balance;

public:
 void ShowAccount()
    {
        cout << "Account Number: " << usr << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
  };
  class Newuser: public Bank{
     private:
    int phno;
    char name[30];
    long amount;
    public:
    void OpenAccount()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter your phone number";
        cin>>phno;
    cout<<"Account Created\n";
    cout<<"Enter amount you want to deposit";
    cin>>amount;
    }

  };
int main()
{ Bank B;
Newuser n1;
olduser obj1;
int num;
switch (num)
{
case 1: cout<<"";
    break;

default:
    break;
}

return 0;
}    