#include <iostream>
using namespace std;
class BankAccount
{
    string customerName,email;
    int cutomerID,accountNumber;
    double  accountBalance;
    public:
    BankAccount(void)
    {
        cutomerID=0;
        accountNumber=0;
        accountBalance=0.0;
        customerName="";
        email="";
    }
    BankAccount(int a,int b,double c,string e,string f)
    {
        cutomerID=a;
        accountNumber=b;
        accountBalance=c;
        customerName=e;
        email=f;
    }
    BankAccount(BankAccount &t)
    {
        cutomerID=t.cutomerID;
        accountNumber=t.accountNumber;
        accountBalance=t.accountBalance;
        customerName=t.customerName;
        email=t.email;
    }
    double getbalance()
    {
        return accountBalance;
    }
    void withdraw(double amt)
    {
        if(amt<accountBalance)
        cout<<"Can withdraw";
        else 
        cout<<"Can not withdraw";
    }
    void compare(BankAccount &r,BankAccount &s)
    {
        cout<<"The the persion with the higher acc balance is \n ";
        if(r.accountBalance>s.accountBalance)
        {
            cout<<"The Name is "<<r.customerName<<" id is "<<r.cutomerID<<" acc no is "<<r.accountNumber<<" email is "<<r.email;
        }
        else
        cout<<"The Name is "<<s.customerName<<" id is "<<s.cutomerID<<" acc no is "<<s.accountNumber<<" email is "<<s.email;
    }

};
int main()
{
     string s1,s2;
    int a,b;
    double  d;
    cout<<"Enter name ";
    cin>>s1;
    cout<<"Enter Coustumer id ";
    cin>>a;
    cout<<"Enter account no";
    cin>>b;
     cout<<"Enter Balance";
     cin>>d;
     cout<<"Enter email ";
    cin>>s2;
    BankAccount c1(a,b,d,s1,s2);
    cout<<"Enter name ";
    cin>>s1;
    cout<<"Enter Coustumer id ";
    cin>>a;
    cout<<"Enter account no";
    cin>>b;
     cout<<"Enter Balance";
     cin>>d;
     cout<<"Enter email ";
    cin>>s2;
    BankAccount c2(a,b,d,s1,s2);
    c1.compare(c1,c2);
    cout<<"\nEnter the amt to check";
    double q;
    cin>>q;
    c1.withdraw(q);

}