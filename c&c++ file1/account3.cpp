#include <iostream>
using namespace std;
class Bank {
    private:
    int n;
    int usr;
    public:
    void fun(){
        cout<<"Enter your choice";
        cout<<"\n1.Enter your username";
        cout<<"\n2.Do you want to create a new account";
        cout<<"\n3.Exit\n";
        cin>>n;
    switch (n)
    {
    case 1: 
    cin>>usr;
    class olduser
    {
  private:
    int acno;
    char name[30];
    long balance;

public:
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
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
    break;
    case 2:  class Newuser
    {
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
        break;
    
    default:
        break;
    }
    }
};
  int main()
{
   Newuser obj;
obj.fun();
obj.showaccount();
return 0;
}    