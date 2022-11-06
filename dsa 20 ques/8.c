//WAP to print sum of even and odd numbers from 1 to N numbers.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int e=0,o=0;
    for(int i=1;i<=n;i++)
    {
        if ((i%2)==0)
            e+=i;
        else
            o+=i;
    }
    printf("Sum of Odd = %d \n",o);
    printf("Sum of Even = %d",e);
}