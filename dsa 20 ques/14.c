//WAP to find the sum of digits of the entered number.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int s=0,i,j;
    for (i=n,j=i%10;i>0;i=i/10,j=i%10)
        s=s+j;
    printf("%d",s);
}