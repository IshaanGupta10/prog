//USING CASTING OPERATOR
#include <iostream>
using namespace std;
class cmplx
{
    int a,b;
    public:
    cmplx(){}
    cmplx(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<<"a="<<a<<"\n"<<"b="<<b;
    }
    operator int()
    {
        return a;
    }
};
int main()
{
    cmplx c(3,4);
    int x;
    x=c;
    cout<<"x="<<x<<endl;
    c.show();
}