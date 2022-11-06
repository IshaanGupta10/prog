#include <iostream>
using namespace std;
struct stu
{
    int rn,m[5];
    char name[50];
};
void pct(stu s[],int n)
    {
        
        for(int i=0;i<n;i++)
        {
            int tm=0;
            for(int j=0;j<5;j++)
            { 
            tm+= s[i].m[j];
            }
            float pt;
            pt = (((float)tm/500)*100);
        cout<<"Total marks is "<<tm<<" and percentage is "<<pt<<endl;
        }
        
    }

 void search(stu s[],int n)
    {
        cout<<"enter given roll no";
        int r;
        cin>>r;
        for(int i=0;i<n;i++)
        {
            if(s[i].rn==r)
            {
                cout<<"name"<<"   "<<"roll no   "<<"marks"<<endl;
                for(int j=0;j<5;j++)
                { 
                cout<<s[i].name<<"      "<<s[i].rn<<"        "<<s[i].m[j]<<endl;
                }

            }

        }

    }
void range(stu s[],int n)
{
    cout<<"enter range";
    float r1,r2;
    cin>>r1>>r2;
    for(int i=0;i<n;i++)
        {
            int tm=0;
            float pt;
            for(int j=0;j<5;j++)
            { 
            tm+= s[i].m[j];
            }
           for(int k=0;k<5;k++)
           {
            pt = ((float)tm/500)*100;
        if((pt>=r1)&&(pt<=r2))
        {
            cout<<s[i].name<<"      "<<s[i].rn<<"        "<<s[i].m[k]<<endl;
        }
           }

        }

}
void sort(stu s[],int n)
{
    for(int i=0;i<n;i++)
     {
        for(int j=0;j<4;j++)
    { int temp;
        if(s[i].m[j+1]>s[i].m[j])
        {
            temp=s[i].m[j];
            s[i].m[j]=s[i].m[j+1];
            s[i].m[j=1]=temp;

        }
    }
     }
}


int main()
{
    cout<<"enter n";
    int n;
    cin>>n;
    stu s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter name ";
        cin>>s[i].name;
        cout<<"enter roll no ";
        cin>>s[i].rn;
        for(int j=0;j<5;j++)
        { 
        cout<<"enter marks ";
        cin>>s[i].m[j];
        }
    }
   pct(s,n);
    search(s,n);
    range(s,n);
    sort(s,n);
  
    cout<<"name"<<"   "<<"roll no   "<<"marks"<<endl;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<5;j++)
    { 
        cout<<s[i].name<<"      "<<s[i].rn<<"        "<<s[i].m[j]<<endl;
    }
     }
      
     return 0;

}
