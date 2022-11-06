#include <iostream>
using namespace std;
class st
{
    string s;
    int l;
    public:
    st(void)
    {
        cout<<"Enter string ";
        cin>>s;
        cout<<"Enter length ";
        cin>>l;

    }
    st(string a,int b)
    {
        s=a;
        l=b;
    }
    st(st &t)
    {
        s=t.s;
        l=t.l;
    }
    void join1(st &r,st &v)
    { 
        
        cout<<"The joind string is "<<(r.s+v.s)<<endl;
    }
    void display()
    {
        cout<<"The string is "<<s<<endl;
    }

};
int main()
{
    st i;
    string a;
    int b;
    cout<<"Enter string ";
        cin>>a;
        cout<<"Enter length ";
        cin>>b;
   st o(a,b);
   st n(i);
   n.join1(i,o);
   i.display();
    o.display();
 n.display();
    

}