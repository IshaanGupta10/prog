#include <iostream>
using namespace std;
class mov
{
    public:
    static int c;
    mov(void)
    {
        c++;
    }
   
    static void lv()
    {
       cout<<"the no of obj is"<<c<<endl;

    } 


};
int mov::c;
int main()
{
    mov ab,cb,cc;
    ab.lv();

}


