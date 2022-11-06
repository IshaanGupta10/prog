#include <iostream>
#include <cmath>
using namespace std;
class ab
{
   
    void area(int r)
    {
        cout<<"the area of circle is "<<(3.14*r*r);
    }
    void area(int l,int b)
    {
        cout<<"the area of rectangle is "<<(l*b);
    }
     void area(double s1,double s2,double s3)
    {
        double s=(s1+s2+s3)/2;
        cout<<"the area of triangle is "<<(sqrt((s*(s-s1)*(s-s2)*(s-s3))));
    }
    public :
    void check()
    {
        int n;
    cout<<"Enter 1 for area of circle, 2 for area of rectangele and 3 for area of triangle"<<endl;
    cin>>n;
    
    switch (n)
    {
        case 1:
        int r;
        cout<<"enter radius ";
        cin>>r;
        area(r);
        break;
        case 2:
        int l,b;
        cout<<"Enter length and bredth";
        cin>>l>>b;
        area(l,b);
        break;
        case 3:
        double s1,s2,s3;
        cout<<"Enter 3 sides";
        cin>>s1>>s2>>s3;
        area(s1,s2,s3);
        break;
        default:
        cout<<"Enter right input";

    }

    }
};
int main()
{
    ab a;
    a.check();
    return 0;
}