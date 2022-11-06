
#include <iostream>
using namespace std;
class D
{
    int d;
    public:
    void Input()
    {
        cin>>d;
    }
    void Output()
    {
        cout<<d;
    }
    D operator + (D obj)
    {
        D temp;
        temp.d=d+obj.d;
        return temp;
    }
    D operator > (D obj1)
    {
        if (d>obj1.d)
        {
            return *this;
        }
        else
        {
            return obj1;
        }
    }
    D operator == (D obj)
    {
        if (d==obj.d)
        {
            cout<<"They contain same distance.";
        }
    }
};
int main ()
{
    D a,b,c,d,e;
    a.Input();
    b.Input();
    c=a+b;
    c.Output();
    d=a>b;
    cout<<"\nLarger is :";
    d.Output();
    e=a==b;
}