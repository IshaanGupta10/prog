#include <iostream>
using namespace std;
class cmplx
{
   int r,i;
    public:
    cmplx(void)
    {
        cout<<"Default Constructor executed\n";
       r=0;
       i=0;
    }
    cmplx(int a,int b)
    {
        cout<<"Parameterised Constructor executed\n";
        r=a;
        i=b;
    }
    cmplx(cmplx &t)
    {
        cout<<"Copy Constructor executed\n";
        r=t.r;
        i=t.i;
    }
    
    ~cmplx()
    {
        cout<<"Distructor executed\n";
    }

    
};
int main()
{
    cmplx c;
    
    cmplx d(2,3);
    cmplx r(c);
   


}