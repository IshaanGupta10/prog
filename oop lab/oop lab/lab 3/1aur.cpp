#include <iostream>
#include <cmath>
using namespace std;

class Rectangle{
    int l, b, c;
    public:
    void input(){
        cout<<"\nEnter length and breadth of rectangle: ";
        cin>>l>>b;
    }
    friend void area(Rectangle);
};

class Circle{
    float r;
    public:
    void input(){
        cout<<"Enter radius of circle: ";
        cin>>r;
    }
    friend void area(Circle);
};

class Triangle{
    int a, b, c;
    public:
    void input(){
        cout<<"Enter the three sides of triangle: ";
        cin>>a>>b>>c;
    }
    friend void area(Triangle);
};

void area(Rectangle rec){
    cout<<'\n'<<"Rectangle: "<<rec.l*rec.b;
}

void area(Circle cir){
    cout<<'\n'<<"Circle: "<<M_PI*cir.r*cir.r;
}

void area(Triangle tri){
    float s =((float) (tri.a + tri.b + tri.c))/2;
    cout<<'\n'<<"Triangle: "<<sqrt(s*(s-tri.a)*(s-tri.b)*(s-tri.c))<<endl;
}

int main(){
    Rectangle rec;
    Circle cir;
    Triangle tri;
    rec.input();
    cir.input();
    tri.input();

    cout<<"\nThe required areas are:\n";
    area(rec);
    area(cir);
    area(tri);
    return 0;
}