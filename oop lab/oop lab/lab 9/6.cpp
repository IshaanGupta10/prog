#include <iostream>
using namespace std;
int main()
{
    int a[5],i=0; 
    try
    {
        while(i<10)
        {
        if(i<5)
        {
            cout<<"Enter val";
            cin>>a[i++];
        }
        else
        throw('p');
    }
    }
    catch(char c)
    {
        cout<<"Array out of bounds";
    }
}

