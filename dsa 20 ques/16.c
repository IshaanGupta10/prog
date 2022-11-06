//WAP to find the reverse of a number.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int i,j,r=0;
    for(i=n,j=i%10;i>0;i=i/10,j=i%10)
        r=(r*10)+j;
    printf("%d",r);
}