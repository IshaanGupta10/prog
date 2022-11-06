#include <iostream>
using namespace std;
class Arr
{
    
    public:
    int a[10];
    istream &operator>> (istream &din)
    {
        
        for(int i=0;i<10;i++)
        din>>a[i];
        return din;
    }
     ostream &operator << (ostream &dout)
    {
        for(int i=0;i<10;i++)
        dout<<a[i]<<endl;
        return dout;
    }
    
};
int main()
{
    Arr c;
    c>>cin;
    c<<cout;

}