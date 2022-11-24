#include <iostream>
using namespace std;
template <class T>
class A
{
    T a,b;
    public:
    A(int e,int f)
    {
        a=e;
        b=f;

    }
    void swap()
    { 
        T temp=a;
        a=b;
        b=temp;
    }
    void display()
    {
        cout<<a<<b;
    }
};
int main()
{
    A <int> ob(6,7);
    ob.swap();
    ob.display();
return 0;
}