#include <iostream>
using namespace std;
class Time
{ 

    int hr,min;
    public:
    Time(int a)
    {
        cout<<"Enter hr and min";
        cin>>hr>>min;
    }
    Time()
    {}
    int operator ==(Time t)
    {
        if(t.hr==hr&&t.min==min)
        {
            return 1;
        }
        else
        return 0;
    }
    Time operator =(int a)
    {
        Time temp;
        temp.hr=hr;
        temp.min=min;
        return temp;
    }
    void disp()
    {
        cout<<"Hours = "<<hr<<" Minuits= "<<min<<endl;
    }
};
int main()
{
    Time a(0),b(0),c;
    if(a==b)
    {
        cout<<"Equal";
    }
    else
    {
        cout<<" Not Equal";

    }
    c=b;
    c.disp();
}

