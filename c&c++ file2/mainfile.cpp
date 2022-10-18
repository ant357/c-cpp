#include<iostream>
#include<fstream>
#include<string.h>
#include"account6.cpp"
using namespace std;

void login();
void registration();
void forgot();
int main()
{
    int c;
     cout<<"\t|||| Press 1:  LOGIN             ||||||||\n";
     cout<<"\t|||| Press 3:  REGISTER          ||||||||\n";
     cout<<"\t|||| Press 4:  FORGET PASSWORD   ||||||||\n";
     cout<<"\t|||| Press 5:  EXIT              ||||||||\n";
     cout<<"\n\t\t\t please enter your choice: ";
     cin>>c;
     cout<<endl;
     switch(c)
     {
        case 1:
             login();
             break;
      
       case 3:
             registration();
             break;
        case 4:
             forgot();
             break;
        case 5:
            cout<<"\t\t\t thank u \n\n";
            //exit();
             break;         
        default:
        system("cls");
        cout<<"\t\t\t  please select from the option given above \n";
        main();
     }
}
void login()
{
    int count;
    string userId,password,id,pass;
    system("cls");
    cout<<"\t\t\t please enter the username and password: ";
    cout<<"\t\t\t Username ";
    cin>>userId;
    cout<<"\t\t\t Password";
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
        cout<<userId<<"\n your login is successful \n ";
        bank();
    }
    else{
        cout<<"\n LOGIN ERROR \n please check your username\n";
    }
}
void registration()
{
string ruserId,rpassword,rid,rpass;
system("cls");
cout<<"\t\t\t Enter the username:";
cin>>ruserId;
cout<<"\t\t\t Enter the password: ";
cin>>rpassword;
ofstream f1("records.txt", ios::app);
f1<<ruserId<<' '<<rpassword<<endl;
system("cls");
cout<<"\n\t\t\t Registration is sucessfull \n";
main();
}
void forgot()
{
    int option;
    system("cls");
    cout<<"\t\t\t you forgot the password?";
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
            cout<<"\n\t\t enter the username which you remembered:";
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