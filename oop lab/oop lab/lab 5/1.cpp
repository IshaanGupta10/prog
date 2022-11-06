#include <iostream>
using namespace std;
class Student
{
   
    
    public:
    string name;
    int rollno,age;
    Student(string s,int a,int b)
    {
        name=s;
        rollno=a;
        age=b;
 

    }
    
};
class test : protected Student
{
   
    public:
    int marks[5];
    test(string e,int f,int g) :Student(e,f,g)
    {
        
        for(int i =0;i<5;i++)
        {
            cout<<"Enter marks";
            cin>>marks[i];
        }    
       
    }
    void display()
    {
        cout<<"Name is "<<name<<" Roll no is "<<rollno<<" Age "<<age<<" marks ";
        for(int i =0;i<5;i++)
        {
            
            cout<<marks[i]<<endl;
        }
        
            }
};
class sport
{
    public:
    int k;
    sport(int h)
    {
        k=h;
    }
    


};
class result :protected test,sport
{
    public:
    int tm=0;
    double tp;
    result(string e,int f,int g,int x):test(e,f,g),sport(x)
    {

    }
    void calc()
    {
 for(int i =0;i<5;i++)
        {
            tm+=marks[i];
        }
        tm+=k;    
tp=(tm/600)*100;
    }
void display()
{
    calc();
    cout<<"the percentage is "<<tp<<" and total marks is "<<tm;

}
};
int main()
{
    string e;
    int f,g,i;

     cout<<"Enter name";
            cin>>e;
             cout<<"Enter roll no";
            cin>>f;
             cout<<"Enter age";
            cin>>g;
             cout<<"Enter sport marks";
            cin>>i;
    result t(e,f,g,i);  
    t.display();
}
