#include <iostream>
using namespace std;
class cmplx
{
    int r,i;
    public:
    cmplx(void)
    {
        cout<<"Enter real part";
        cin>>r;
        cout<<"enter imaginary part";
        cin>>i;
    }
    cmplx operator +(cmplx c)
    {
        cmplx temp;
        temp.i=i+c.i;
        temp.r=r+c.r;
        return temp;
    }
    cmplx operator ++()
    {
        cmplx temp;
        temp.i=i+1;
        temp.r=r+1;
        return temp;
    }
     cmplx operator ++(int c)
    {
        
        i=i+1;
        r=r+1;
        
    }
};
int main()
{
    cmplx c,d,e,f,g;
    e=c+d;
    ++f;
    g++;
}