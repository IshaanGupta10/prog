#include <iostream>
using namespace std;
template <class T>
class A
{
    T a[5];
    int s;
    public:
    void in()
    {
        cout<<"Enter s";
        cin>>s;
        cout<<"Enter ";
        for(int i=0;i<s;i++)
            cin>>a[i];
    }
void st()
{
    T temp;
    for(int i=0;i<s;i++)
    {
    for(int j=i;j<s;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }

}
void dp()
{
    for(int i=0;i<s;i++)
   {
    cout<<a[i]<<" ";
   }
}
};
int main()
{
    A <int> obj;
   obj.in();
   obj.st();
   obj.dp();
    A <float> obj1;
   obj1.in();
   obj1.st();
   obj1.dp();
   
}