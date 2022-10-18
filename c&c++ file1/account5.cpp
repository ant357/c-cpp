#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class login{
    public:
 string UserName,Password; 
};
class Acc:public login{   //create account class
    public:
    int accNo;
    char name[1000];
     int deposit;
     char type;
    void create();
    int login();
    void registration();
    void display();
};
void Acc::display(){
   if(login()==1){
   cout << "\nAccount No. : " << accNo;
  cout << "\nAccount Holder Name : ";
  cout << name;
  cout << "\nType of Account : " << type;
  cout << "\nBalance amount : " << deposit;}
  else{
    cout<<"login Fail";
  }
}
int Acc::login(){
    int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\n\t\t\tHello  "<<user<<"\n\t\t\t<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
               // main();
               return 1;
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
               // main();
        }
        return 0;
}
void Acc::registration(){
        system("cls");
        cout << "\nEnter The account No. :";
    cin >> accNo;
    cout << "\n\nEnter The Name of The account Holder : ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\nEnter Type of The account (C/S) : ";
    cin >> type;
    type = toupper(type);
    cout << "\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
    cin >> deposit;
  cout << "\n\n\nAccount Created..";
        cout<<"Enter the username :";
        cin>>UserName;
        cout<<"\nEnter the password :";
        cin>>Password;
        ofstream reg("database.txt",ios::app);
        reg<<UserName<<' '<<Password<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
       // main();
}
 int main()
{
    Acc x;
      x.registration();
    // x.login();
    x.display();
}