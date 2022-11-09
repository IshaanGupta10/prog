#include <iostream>
using namespace std;
template <class T>
    void in(T a[],int s)
    {
        cout<<"Enter s";
        cin>>s;
        cout<<"Enter ";
        for(int i=0;i<s;i++)
            cin>>a[i];
    }
template <class T>
void st(T a[],int s)
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
template <class T>
void dp(T a[],int s)
{
    for(int i=0;i<s;i++)
   {
    cout<<a[i]<<" ";
   }
}
int main()
{
    int a[5];
    in<int>(a,5);
    st<int>(a,5);
    dp<int>(a,5);
    float b[5];
    in<float>(b,5);
    st<float>(b,5);
    dp<float>(b,5);
}