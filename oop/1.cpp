#include <iostream>

using namespace std;
class abc

{
    private:
    int l,b;
    public:
    void calc();
};
void abc :: calc()
{
    cout<<"Enter length and bredth ";
    cin>>l>>b;
    int area= l*b;
    cout<<"the area is "<<area;

}
int main()
{
    abc a;
    a.calc();

    return 0;
}