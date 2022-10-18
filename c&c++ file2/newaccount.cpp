#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Banking{
    int count;
    string userId,password,id,pass;
    string ruserId,rpassword,rid,rpass;
    int option;
    public:
void login();
void registration();
void forgot();
void bank();
};
int main()
{
    Banking B;
    int c;
    system("color 19");
    cout<<"\t\t\t\t\t\t WELCOME TO SWISS BANK\n\n\n";
     cout<<"\t\t Press 1:  LOGIN            \n\n\n";
     cout<<"\t\t Press 2:  REGISTER         \n\n\n";
     cout<<"\t\t Press 3:  FORGET PASSWORD  \n\n\n";
     cout<<"\t\t Press 4:  EXIT             \n\n\n";
     cout<<"\n\t\t\t PLEASE ENTER YOUR CHOICE: ";
     cin>>c;
     cout<<endl;
     switch(c)
     {
        case 1:
             B.login();
             break;
      
       case 2:
             B.registration();
             break;
        case 3:
             B.forgot();
             break;
        case 4:
            cout<<"\t\t\t THANK YOU ! \n\n";
           exit(0);
             break;         
        default:
        system("cls");
        cout<<"\t\t\t  please select from the option given above \n";
        main();
     }
}
void Banking::login()
{
    system("cls");
    cout<<"\t\t\t please enter the username and password: \n";
    cout<<"\t\t\t\n Username ";
    cin>>userId;
    cout<<"\t\t\t\n Password ";
    cin>>password;
    ifstream input("records.txt");
    while(input>>id>>pass)
    {
         if(id==userId && pass==password)
         { 
            count=1;
            system("cls");
         }
    }
    input.close();
    if(count==1)
    {
        cout<<"\t\n\n"<<userId<<"  your login is successful \n ";
         bank();
    }
    else{
        cout<<"\n LOGIN ERROR \n please check your username\n";
    }
}
void Banking::registration()
{
system("cls");
cout<<"\t\t\t Enter the username:";
cin>>ruserId;
cout<<"\t\t\t Enter the password: ";
cin>>rpassword;
ofstream f1("records.txt", ios::app);
f1<<ruserId<<' '<<rpassword<<endl;
system("cls");
cout<<"\n\t\t\t Registration is sucessfull \n";
cout<<endl;
main();
}
 void Banking::forgot()
{

    system("cls");
    cout<<"\t\t\t you forgot the password?"<<endl;
    cout<<"Press 1 to search your id by username"<<endl;
    cout<<"Press 2 to go back to the main menu"<<endl;
    cout<<"\t\t\t Enter your choice: ";
    cin>>option;
    switch(option)
    {
        case 1:
         {
            int count=0;
            string suserId,sId,spass;
            cout<<"\n\t\t enter the username which you remembered:  ";
            cin>>suserId;
            ifstream f2("records.txt");
            while(f2>>sId>>spass)
            {
                if(sId==suserId)
                {
                    count=1;
                }
            }
           f2.close();
           if(count==1)
           {
            cout<<"\n\n your account is found! \n";
            cout<<"\n\n   Your password is :     "<<spass;
            main();
           }
            else
            {
                cout<<"\n\t sorry! your account is not found! \n";
                main();
            }
           break;
         }
          case 2:
          {
            main();
          }
          default:
                 cout<<"\t\t\t Wrong choice ! please try again"<<endl;
                 forgot();
    } 
}
class account: public Banking
{
private:
    string name;
    int phno,adhr;
    string adress;
public:

    void  getAccountDetails()
    {
       cout<<"\n1) Enter phone Number  : ";
        cin>>phno;
        cout<<"\n2) Enter Customer Name : ";
        cin>>name;
        cout<<"\n3) Enter Account holder's adress   : ";
        cin>>adress;
        cout<<"\n2) Enter Aadhar card details : ";
        cin>>adhr;
         

    }
    void displayDetails()
    {
        cout<<"\n1)Phone Number  : "<<phno;   
       cout<<"\n2)Customer Name : "<<name; 
        cout<<"\n3)Account holder's adress    : "<<adress;
        
cout<<"\n2) Aadhar card details : "<<adhr;

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
         ofstream f1("details.txt", ios::app);
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
 
 class loan :  public saving_account, public current_account{
    public:
    double amount;
double rates;
int years;
void getloan(){
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
void displayloan(){
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
void Banking::bank()
{
    current_account c1;
    saving_account s1;
    loan l;
    char type;
    cout<<"\nEnter S for saving account and C for current account :  ";
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
            cout<<"5)   LOAN"<<endl;
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
                l.getloan();
                l.displayloan();

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
            cout<<"5)   LOAN"<<endl;
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
                l.getloan();
                l.displayloan();

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
