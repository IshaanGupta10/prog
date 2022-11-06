#include <iostream>
using namespace std;
class inter
{
  int t;
  double r,p,si;
  public:
  void input()
  {
      cout<<"enter the principle amount ";
      cin>>p;
      cout<<"enter the rate of interest ";
      cin>>r;
      cout<<"enter the time in years ";
      cin>>t;
  }
  void calc()
  {
      si=p*(1+(r/100.0)*t);
  }
  void print()
  {
      cout<<"Simple Interest earned is "<<si;
  }
};
int main()
{
    inter i;
    i.input();
    i.calc();
    i.print();
    return 0;
}