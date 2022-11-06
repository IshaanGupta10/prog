#include <iostream>
using namespace std;
class complex
{
    private:
    float r,i;
    public:
    void input()
    {
        cout<<"enter the real part ";
        cin>>r;
        cout<<"enter the imaginary part ";
        cin>>i;

    }
    void add(complex c1,complex c2)
    {
        cout<<"the Sum is "<<c1.r+c2.r<<"+ "<<c1.i+c2.i<<"i";

    }
    void sub(complex c1,complex c2)
    {
        cout<<"the Diffrence is "<<c1.r-c2.r<<"+ "<<c1.i-c2.i<<"i";

    }
};
int main()
{
    complex a,b,c;
    cout<<"Enter 1st complex no ";
    a.input();
    cout<<"Enter 2nd complex no ";
    b.input();
    cout<<"Press 1 for add and 2 for substract";
    int n;
    cin>>n;
    if(n==1)
    c.add(a,b);
    if(n==2)
    c.sub(a,b);
    return 0;
}



