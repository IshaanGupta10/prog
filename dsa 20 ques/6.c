//WAP to find the factorial of a given number.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int p=1;
    for(int i=1;i<=n;i++)
        p*=i;
    printf("Result = %d",p);
}