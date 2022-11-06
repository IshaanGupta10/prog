#include <iostream>
using namespace std;
class fu
{
    int a,b;
    void swap(int *a,int *b)
    {
        int temp;
        temp = *a;
        *a=*b;
        *b=temp;

    }
    public:
    void input()
    {
       
        cout<<"Enter 2 nos ";
        cin>>a>>b;
        swap(&a,&b);

    }
    void display()
        {
            cout<<a<<" "<<b;
        }
    
};
int main()
{
    fu f;
    f.input();
    f.display();
    return 0;
}

