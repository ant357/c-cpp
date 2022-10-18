#include<iostream>
using namespace std;
class account
{
private:
    string name;
    int accno;
    string atype;
public:

    void  getAccountDetails()
    {
        cout<<"\nEnter Customer Name : ";
        cin>>name;
        cout<<"Enter Account Number  : ";
        cin>>accno;
        cout<<"Enter Account Type    : ";
        cin>>atype;
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype;
    }
};
class current_account : public account
{
private:
    float balance;
public:
    void c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to be withdraw :";
        cin>>withdraw;
        if(balance > 1000)
        {
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
 
    }
 
 
};
 
class saving_account : public account
{
private:
    float sav_balance;
public:
    void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
    void s_deposit()
    {
        float deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance :- "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance > 500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
};
 
 class loan :public saving_account, public current_account{
    public:
    double amount;
double rates;
int years;
void inputFunction(){
    cout<<"\n Enter the amount of the loan: ";
cin>>amount;
if(amount > 100000)
{
cout<<"\n Error: Amount Exceeds $100,000.00";
return;
}
cout<<"\n Enter the annual interest rate (example 3 = 3%):";
cin>>rates;
if(rates > 22)
{
cout<<"\n Error: Rates Exceeds 22%";
return;
}
cout<<"\n Enter the Duration of the Loan in years:";
cin>>years;
if(years > 6)
{
cout<<"\n Error: Years Exceeds 6";
return;
}
}
void outputFunction(){
    double emi = 0;
double paybackamt = 0;
double interest = (amount*rates*years)/100;
paybackamt = amount + interest;
emi = paybackamt/(years*12);
//std::locale comma_locale(std::locale(), new utility());
//std::cout.imbue(comma_locale);
cout<<"\n\n";
cout<<left<<"\tLoan Amount emi: "<<emi;
cout<<right;
}
 };
 
void bank()
{
    current_account c1;
    saving_account s1;
    loan l;
    char type;
    cout<<"\nEnter S for saving customer and C for current a/c customer : ";
    cin>>type;
    int choice;
    if(type=='s' || type=='S')
    {
        s1.getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5 LOAN"<<endl;
            cout<<"6)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s1.s_deposit();
                break;
            case 2 :
                s1.s_withdraw();
                break;
            case 3 :
                s1.s_display();
                break;
            case 4 :
                s1.displayDetails();
                s1.s_display();
                break;
             case 5: 
                l.inputFunction();
                l.outputFunction();

                break;
            case 6 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else if(type=='c' || type=='C')
    {
        c1.getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5 LOAN"<<endl;
            cout<<"6)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                c1.c_deposit();
                break;
            case 2 :
                c1.c_withdraw();
                break;
            case 3 :
                c1.c_display();
                break;
            case 4 :
                c1.displayDetails();
                c1.c_display();
                break;
                case 5: 
                l.inputFunction();
                l.outputFunction();

                break;
            case 6 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else
    {
        cout<<"\nInvalid Account Selection";
    }
end:
    cout<<"\nThank You for Banking with us..";
   // return 0;
}