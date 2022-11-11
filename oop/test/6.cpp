#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream out ("Text");
    out<<"I am at ofstream class"<<endl;
    out<<"Good bye.";
    return 0;
}