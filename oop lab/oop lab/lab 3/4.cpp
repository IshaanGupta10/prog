#include <iostream>
using namespace std;
class ef
{
    int n;
    public:
    void input()
    {
        cout<<"enter a number ";
        cin>>n;
    }
    void square(ef obj);
    void cube(ef obj);
};
inline void ef::square(ef obj)
{
    cout<<"the square is "<<obj.n*obj.n;

}
inline void ef::cube(ef obj)
{
    cout<<"\nthe cube is "<<obj.n*obj.n*obj.n;
}
int main()
{
    ef e;
    e.input();
    e.square(e);
    e.cube(e);
}