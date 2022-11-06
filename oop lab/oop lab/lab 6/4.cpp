#include <iostream>
#include <string.h>
using namespace std;
class S
{
    char *a;
    public:
    S ()
    {
        a= new char [10];
    }
    void Input()
    {
        cin>>a;
    }
    S operator + (S obj)
    {
        S temp;
        strcat(a,obj.a);
        temp.a=a;
        return temp;
    }
    void Output()
    {
        cout<<a;
    }
};
int main ()
{
    S a,b,c;
    a.Input();
    b.Input();
    c=a+b;
    c.Output();
}