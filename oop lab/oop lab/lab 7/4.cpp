#include <iostream>
using namespace std;
class B
{
    int m;
    public:
    B(){}
    B(int e)
    {
        m=e;
    }
    int getterm()
    {
        return m;
    }
     void show()
    {
        cout<<m;
    }
};
class A 
{
    int a;
    public:
    A(){}
    A(int d)
    {
        a=d;
    }
    A(B c)
    {
        a=c.getterm()/60.0;
    }
     void show()
    {
        cout<<a;
    }
};
int main()
{
    A t;
    B k(120);
    t=k;
    t.show();
}