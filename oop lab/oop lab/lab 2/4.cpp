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
    void display()
    {
        cout<<" the complex no is "<<r<<"+"<<i<<"i"<<endl;
    }
};
int main()
{
    complex c[10];
    for(int i=0;i<10;i++)
    {
        c[i].input();

    }
    for(int i=0;i<10;i++)
    {
        c[i].display();

    }
}
