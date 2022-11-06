#include <iostream>
using namespace std;
class A;
class B
{
    int m;
    public:
    B(){}
    B(int e)
    {
        m=e;
        
    }
    void settera(int k)
    {
        m=k;
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
    A(int e)
    {
        a=e;
    }
    void show()
    {
        cout<<a;
    }
    operator B()
    {
        B r;
        r.settera(a/100);
        return r;
    }
};

int main()
{
    A t(500);
    B k;
    k=t;
    k.show();
}