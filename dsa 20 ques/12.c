//WAP to check whether the entered number is prime or not.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int p=0;
    for(int i=1;i<=n;i++)
    {
        if ((n%i)==0)
            p++;
    }
    if (p==2)
        printf("Prime.");
    else
        printf("Not prime.");
}