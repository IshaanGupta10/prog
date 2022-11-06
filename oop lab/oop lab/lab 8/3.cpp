#include <iostream>
using namespace std;
class Employee
{
    public:
string name;
int id,salary;
virtual void input()
{
}
virtual void display()
{
    cout<<"Salary is "<<salary;

}
};
class Regular:public Employee
{
    int da,hra;
    public:
    void input()
    {
        cout<<"Enter da and hra";
        cin>>da;
        cin>>hra;
        salary=da+hra;
    }
    void display()
{
    cout<<"Salary is "<<salary;

}


};
class Parttime:public Employee
{
    int hr,pp;
    public:
    void input()
    {
        cout<<"Enter hours and per pay";
        cin>>hr;
        cin>>pp;
        salary=hr*pp;
    }
    void display()
{
    cout<<"Salary is "<<salary;

}
};
int main()
{
    Employee *e;
    Parttime p;
    Regular r;
    e=&p;
    e->input();
    e->display();
    e=&r;
    e->input();
    e->display();


}