#include <iostream>
using namespace std;
class A;
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
    void settera(int k)
    {
        m=k;
    }
    void setterb(int z)
    {
        n=z;
    }
    
    void show()
    {
        cout<<m<<n;
    }
    operator A()
    {
        A r;
        r.settera(m);
        r.setterb(n);
        return r;
    }
};

class A 
{
    int a,b;
    public:
    A(){}
    A(int e,int g)
    {
        a=e;
        b=g;
    }
    void settera(int k)
    {
        a=k;
    }
    void setterb(int z)
    {
        b=z;
    }
    
    void show()
    {
        cout<<a<<b;
    }
    
};

int main()
{
    A t;
    B k(3,4);
    t=k;
    
    
    t.show();


}