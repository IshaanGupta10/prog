#include <iostream>
using namespace std;
class shape
{
   
    public:
    double area;
    void display()
    {
        cout<<"The area is "<<area;
    }
};
class circle :protected shape
{
    int r;
    public:
    void calc()
    {
        cout<<"Enter r";
        cin>>r;
        area=3.14*r*r;
    }
    void display1()
    {
        display();

    }    

};
class triange :protected shape
{
    int b,h;
    public:
    void calc()
    {
        cout<<"Enter b";
        cin>>b;
        cout<<"Enter h";
        cin>>h;
        area=(1/2.0)*b*h;
    }
    void display2()
    {
        display();

    }    

};
class rectangle :protected shape
{
    int l,b;
    public:
    void calc()
    {
        cout<<"Enter l";
        cin>>l;
        cout<<"Enter b";
        cin>>b;
        area=b*l;
    }
    void display3()
    {
        display();

    }    

};
 int main()
 {
    rectangle r;
    triange t;
    circle c;
    r.calc();
    r.display3();
     t.calc();
    t.display2();
     c.calc();
    c.display1();
    
    }