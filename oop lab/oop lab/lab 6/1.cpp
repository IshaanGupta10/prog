#include <iostream>
using namespace std;
class Distance 
{
    int inches,feet;
    public:
    Distance(int r,int s)
    {
        cout<<"enter feet and inches\n";
        cin>>feet>>inches;

    }
     Distance()
    {
        
    }
    Distance operator +(Distance a)
    {
        Distance temp;
        temp.inches=inches+a.inches;
        temp.feet=feet+a.feet;
        return temp;
    }
     Distance operator +(int a)
    {
        Distance temp;
        temp.inches=inches+a;
        temp.feet=feet;
        return temp;
    }
     Distance operator --()
    {
        Distance temp;
        temp.inches=inches-1;
        temp.feet=feet-1;
        return temp;
    }
    void display()
    {
        cout<<"Feet = "<<feet<<"Inches = "<<inches<<endl;
    }

};
int main()
{
    Distance d1(5,6),d2(7,8),d3,d4,d5(4,6);
    d3=d1+d2;
    d4=d1+4;
    d5=--d5;
    d3.display();
    d4.display();
    d5.display();
}