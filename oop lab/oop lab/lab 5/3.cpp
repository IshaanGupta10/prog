#include <iostream>
using namespace std;
class Employee
{
    public:
string name;
int id,salary;
void display()
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
};
int main()
{
    Parttime p;
    Regular r;
    p.input();
    p.display();
    r.input();
    r.display();


}