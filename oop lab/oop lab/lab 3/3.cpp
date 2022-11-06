#include <iostream>
using namespace std;
class sd
{
    
    void pt(int n , char ch)
    {
        for(int i=0;i<n;i++)
        {
            cout<<ch;
        }
    }
    void pt( char ch)
    {
        for(int i=0;i<80;i++)
        {
            cout<<ch;
        }
    }
    void pt(int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<'*';
        }
    }
    void pt()
    {
        for(int i=0;i<80;i++)
        {
            cout<<'*';
        }
    }
    public:
    void check()
    {
int n;
    
    char ch;
    cout<<"Enter n and ch and 0 for default n and ' ' for deault ch";
    cin>>n>>ch;
    if(n==0 && ch==' ')
    {
        pt();
    }
    else if(n!=0 && ch==' ')
    {
        pt(n);
    }
    else if(n==0 && ch!=' ')
    {
        pt(ch);
    }
    else if(n!=0 && ch!=' ')
    {
        pt(n,ch);
    }

    }

};
int main()
{
    sd s;
    s.check();
    return 0;
    
}