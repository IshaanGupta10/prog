#include <iostream>
#include <string.h>
using namespace std;
struct Employee
{
    int id;
    string name;
    float basic;
    float gross;
};
int main ()
{
    int n;
    cout << "Enter number of employees. \n";
    cin >> n;
    struct Employee e[n], *ptr;
    ptr=e;
    for(int i=0;i<n;i++)
    {
        cout<<"Employee "<<i+1;
        cout<<"\nEnter name.\n";
        cin >> (*ptr).name;
        cout << "Enter id\n";
        cin >> (*ptr).id;
        cout << "Enter basic salary.\n";
        cin >> (*ptr).basic;
        (*ptr).gross= 1.9*((*ptr).basic);
        ptr++;
    }
    ptr=e;
    cout<<"Name"<<"\tID"<<"\tBasicSal"<<"\tGrossSal";
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        cout<<(*ptr).name<<"\t"<<(*ptr).id<<"\t"<<(*ptr).basic<<"\t"<<(*ptr).gross;
        ptr++;
    }
}