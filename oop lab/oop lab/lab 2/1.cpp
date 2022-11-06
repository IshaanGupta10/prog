#include <iostream>
using namespace std;
class name
{
    private:
    string s;
    public:
    void input()
    {
        cout<<"Enter your name";
        cin>>s;
    }
    void display()
    {
        cout<<"hello "<<s;
    }
};
int main()
{
    name n;
    n.input();
    n.display();
    return 0;
}