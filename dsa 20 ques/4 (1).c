//WAP to print the sum of all numbers up to a given number.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    printf("Sum = %d",sum);
}