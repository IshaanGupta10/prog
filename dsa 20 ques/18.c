//Check whether a number is armstrong number.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int s=0;
    int i,j;
    for(i=n,j=i%10;i>0;i=i/10,j=i%10)
        s=s+(j*j*j);
    if (n==s)
        printf("It is a armstrong number.");
    else
        printf("It is not an armstrong number.");
}