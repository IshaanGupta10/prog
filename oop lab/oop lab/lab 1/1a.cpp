#include <iostream>
using namespace std;
struct stu
{
    int rn,m[5];
    char n[50];
};

int main()
{
    stu s;
    cout<<"enter name ";
        cin>>s.n;
        cout<<"enter roll no ";
        cin>>s.rn;
    for(int i=0;i<5;i++)
    {
        
        cout<<"enter marks ";
        cin>>s.m[i];
    }
    cout<<"name"<<"   "<<"roll no   "<<"marks"<<endl;
     for(int i=0;i<5;i++)
     {
        
        cout<<s.n<<"      "<<s.rn<<"        "<<s.m[i]<<endl;
     }
     return 0;

}
