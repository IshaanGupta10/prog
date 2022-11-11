#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    string n;
    ifstream in ("Text");
    in>>n;
    cout<<n;
    in>>n;
    cout<<n;
    return 0;
}