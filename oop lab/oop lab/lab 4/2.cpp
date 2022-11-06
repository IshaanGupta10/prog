#include <iostream>
using namespace std;
class time
{
    int hh,mm;
    public:
    time(void)
    {
        cout<<"Enter hours ";
        cin>>hh;
        cout<<"Enter minuits";
        cin>>mm;

    }
    time(int a,int b)
    {
        hh=a;
        mm=b;

    }
    time(time &t)
    {
        hh=t.hh;
        mm=t.mm;
    }
    void display()
    {
        cout<<"The time is "<<hh<<":"<<mm<<endl;
    }

};
int main()
{
    time t;
    int a,b;
    cout<<"Enter hours ";
        cin>>a;
        cout<<"Enter minuits and negetive no for no input";
        cin>>b;
    if(b<=-1)
    {
        b=0;
    }
    time s(a,b);
    time r(t);
    t.display();
    s.display();
    r.display();


}