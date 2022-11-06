//to accept name and arrival and display in a format
#include <stdio.h>
struct train
{
    char n[50];
    struct time
    {
    int hh,mm;
    char a[50];
    }r;
}t[5];
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("enter train name ");
        scanf("%s",&t[i].n);
        printf("enter hours ");
        scanf("%d",&t[i].r.hh);
        printf("enter min ");
        scanf("%d",&t[i].r.mm);
        printf("enter am/pm ");
        scanf("%s",&t[i].r.a);

    }
    for(int i=0;i<5;i++)
    {
        if(t[i].r.a[0]=='p')
        {
            t[i].r.hh+=12;

        }
    }
      for(int i=0;i<5;i++)
    {
        printf("the train name is %s and timme is %d:%d hrs \n",t[i].n,t[i].r.hh,t[i].r.mm);

    }

}