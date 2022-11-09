#include <iostream>
using namespace std;
template <class T>
class A
{
    public:
T dis(T a)
{
    return a;
}
};
int main()
{
    A <int> ob1;
    A <double> ob2;
    cout<<ob1.dis(7)<<endl;
    cout<<ob2.dis(7.89);
    return 0;
}