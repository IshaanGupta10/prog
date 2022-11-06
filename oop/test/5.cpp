#include <iostream>
using namespace std;
class A 
{
    int a;
    public:
    A(){}
    void input()
    {
        int e;
        cout<<"Enter";
        cin>>e;
        a=e;
    }
    void show()
    {
        cout<<a;
    }
    void compare(A c)
    {
        if(this->a>c.a)
        {
            cout<<this->a;
        }
        else if(this->a<c.a){
            cout<<c.a;
        }
        else
         cout<<"Equal";
    }

};

int main()
{
    A a,b;
    A *t=&a;
    t->input();
    b.input();
    t->compare(b);
    return 0;
}