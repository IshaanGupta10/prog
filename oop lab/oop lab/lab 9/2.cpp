#include <iostream>
using namespace std;
template <class T>
T dis(T a)
{
    return a;
}
int main()
{
    cout<<dis<int>(7)<<endl;
    cout<<dis<double>(7.89);
}