#include <iostream>
using namespace std;
class B
{
    int m,n;
    public:
    B(){}
    B(int e,int g)
    {
        m=e;
        n=g;
    }
    int getterm()
    {
        return m;
    }
    int gettern()
    { 
        return n;
        
    }
     void show()
    {
        cout<<m<<n;
    }
};
class A 
{
    int a,b;
    public:
    A(){}
    A(B c)
    {
        a=c.getterm();
        b=c.gettern();
    }
     void show()
    {
        cout<<a<<b;
    }
};

int main()
{
    A t;
    B k(4,5);
    t=k;
    t.show();


}