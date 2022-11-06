#include <iostream>
using namespace std;
class Account
{
    public:
    string name;
    int accno,bal;
    Account()
    {  
    cout<<"Enter name ";
    cin>>name;
    cout<<"Enter account no";
    cin>>accno;
     cout<<"Enter Balance";
     cin>>bal;
    }
};
class Savings : public Account
{
    int minbal=2000;
    public:
    void diposit()
    {
        int a;
        cout<<"Enter amt";
        cin>>a;
        bal+=a;
    }
     void withdraw()
    {
        int a;
        cout<<"Enter amt";
        cin>>a;
        if(bal>minbal)
        bal-=a;
        else
        cout<<"Not possible";

    }
    void displaybal()
    {
        cout<<"the bal is "<<bal;
    
    }


};
class Current : public Account
{
    int overdue=2000;
    public:
    void diposit()
    {
        int a;
        cout<<"Enter amt";
        cin>>a;
        bal+=a;
    }
     void withdraw()
    {
        int a;
        cout<<"Enter amt";
        cin>>a;
        if(bal>overdue)
        bal-=a;
        else if(bal-a>overdue)
        {
        bal-=a;
        cout<<"Overdue is "<<bal;
        }
        else
         cout<<"Not possible";

    }
    void displaybal()
    {
        cout<<"the bal is "<<bal;
    
    }


};
int main()
{
    Savings s;
    Current c;
    s.diposit();
    s.withdraw();
    s.displaybal();
     c.diposit();
    c.withdraw();
    c.displaybal();
}