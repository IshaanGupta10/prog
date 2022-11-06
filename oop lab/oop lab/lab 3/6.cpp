#include <iostream>
using namespace std;
class fu
{
    
    void inc(int n)
    {
        ++n;
        cout<<n;
    }
    public:
    void input()
    {
        cout<<"Enter a value ";
        int n;
        cin>>n;
        inc(n);
    }
};
int main()
{
    fu f;
    f.input();
}
