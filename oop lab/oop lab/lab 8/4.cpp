/* WAP to demonstrate use of pure virtual function and abstract base class. */
#include <iostream>
using namespace std;
class A
{
    public:
    virtual void print ()=0;
};
class B : public A
{
    public:
    void print ()
    {
        cout<<"Hello.";
    }
};
int main ()
{
    A *ptr;
    B obj;
    ptr=&obj;
    ptr->print();
}