//USING CONSTRUCTOR
#include <iostream>
using namespace std;
class cmplx
{
    int a,b;
    public:
    cmplx(){}
    cmplx(int i)
    {
        a=i;
        b=0;
    }
    void show()
    {
        cout<<"a="<<a<<"\n"<<"b="<<b;
    }
};
int main()
{
    cmplx c;
    int x=5;
    c=x;
    cout<<"x="<<x<<endl;
    c.show();
}