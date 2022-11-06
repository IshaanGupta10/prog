#include <iostream>
using namespace std;
class shape
{
  
    public:
    double area;
    virtual void calc()
    {
    }
    virtual void display()
    {
        cout<<"The area is "<<area;
    }
};
class circle :public shape
{
    int r;
    public:
    void calc()
    {
        cout<<"Enter r";
        cin>>r;
        area=3.14*r*r;
    }
    void display()
    {
       cout<<"The area is "<<area;
    }    

};
class triange :public shape
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
    void display()
    {
        cout<<"The area is "<<area;

    }    

};
class rectangle :public shape
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
    void display()
    {
        cout<<"The area is "<<area;

    }    

};
 int main()
 {
    shape *s;
    rectangle r;
    triange t;
    circle c;
    s=&r;
    s->calc();
    s->display();
    s=&t;
     s->calc();
    s->display();
    s=&c;
     s->calc();
    s->display();
    }