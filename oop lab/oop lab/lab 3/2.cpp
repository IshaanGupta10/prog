#include <iostream>
#include <cmath>
using namespace std;
class cb
{
    
    void volume(int r)
    {
        cout<<"the volume of sphere is "<<((4/3.0)*3.14*r*r*r);
    }
    void volume(int l,int b,int h)
    {
        cout<<"the volume of cuboid is "<<(l*b*h);
    }
     void volume(int r,int h)
    {
        cout<<"the volume of cylender is "<<(3.14*r*r*h);
    }
    public:
    void check()
    {int n;
    cout<<"Enter 1 for  volume of a sphere,2 for a cylinder and  3 for a cuboid"<<endl;
    cin>>n;
    
    switch (n)
    {
        case 1:
        int r;
        cout<<"enter radius ";
        cin>>r;
        volume(r);
        break;
        case 2:
        int l,b,h;
        cout<<"Enter length and bredth and hight";
        cin>>l>>b>>h;
        volume(l,b,h);
        break;
        case 3:
       int c,d;
        cout<<"Enter radius and hight ";
        cin>>c>>d;
        volume(c,d);
        break;
        default:
        cout<<"Enter right input";

    }

    }
};
int main()
{
    cb a;
    a.check();
    return 0;
}