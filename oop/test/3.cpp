#include <iostream>
using namespace std;
class A
{
    string name;
    int roll,age;
    public:
    void input()
    {
        cin>>name;
        cin>>roll>>age;
    }
    void output()
    {
        cout<<name;
        cout<<roll<<age;
    }
    void* operator new(unsigned int t)
    {
        void *b = malloc(t);
        return b;
    }
    void operator delete(void * b)
    {
        free(b);
    }
};
int main()
{
    A *p=new A;
    p->input();
    p->output();
    delete(p);
}