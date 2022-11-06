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
    cmplx(int a,int b)
    {
        r=a;
        i=b;
    }
    cmplx(cmplx &t)
    {
        r=t.r;
        i=t.i;
    }
    void display()
    {
        cout<<"The no is "<<r<<"+"<<i<<"i"<<endl;
    }
    ~cmplx()
    {
        cout<<"Distructor executed\n";
    }

    
};
int main()
{
    cmplx c;
    int a,b;
    cout<<"Enter real part";
        cin>>a;
        cout<<"enter imaginary part";
        cin>>b;
    cmplx d(a,b);
    cmplx r(c);
    c.display();
    d.display();
    r.display();


}