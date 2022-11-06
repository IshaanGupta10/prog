#include <iostream>
using namespace std;
class student
{
    private:
    int rn,tm;
    string na;
    public:
    void input()
    {
        cout<<"Enter name ";
        cin>>na;
        cout<<"Enter roll no ";
        cin>>rn;
        cout<<"Enter total marks ";
        cin>>tm;

    }
    void display()
    {
        cout<<" name is "<<na;
        cout<<" roll no is "<<rn;
        cout<<" and total marks is "<<tm<<endl;

    }
    
};
int main()
{
    int n;
    cout<<"enter no of students";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].input();
    }
     for(int i=0;i<n;i++)
    {
        s[i].display();
    }
}



