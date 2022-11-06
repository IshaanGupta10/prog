#include <iostream>
using namespace std;
class Employee
{
    private:
    int id;
    string name;
    float basic;
    float gross;
    public:
    void input()
    {
 
        cout<<"\nEnter name.\n";
        cin >> name;
        cout << "Enter id\n";
        cin >> id;
        cout << "Enter basic salary.\n";
        cin >> basic;
    }
    void calc()
    {
         gross= 1.9*(basic);
    }
    void display()
    {
       
        cout<<"\n";
        cout<<name<<"\t"<<id<<"\t"<<basic<<"\t"<<gross<<endl;

    }
};
int main ()
{
    int n;
    cout << "Enter number of employees. \n";
    cin >> n;
    Employee e[n];
    
    for(int i=0;i<n;i++)
    {
       e[i].input();
       e[i].calc();
    }
     cout<<"Name"<<"\tID"<<"\tBasicSal"<<"\tGrossSal";
    for(int i=0;i<n;i++)
    {
       e[i].display();
      
    }
}