//WAP to convert binary number into decimal number and vice versa.
#include <stdio.h>
#include <math.h>
int main ()
{
    int b,n;
    printf("Enter binary number.");
    scanf("%d",&b);
    int i,j;
    double s=0;
    for(i=b,j=0;i>0;i=i/10,j++)
        s=s+(pow(2,j)*(i%10));
    printf("Result in Decimal = %f\n",s);
    printf("Enter decimal mumber.");
    scanf("%d",&n);
    int a[32];
    for (i=n,j=0;i>0;i=i=i/2,j++)
        a[j]=i%2;
    printf("Binary Number : ");
    for(j=j-1;j>=0;j--)
        printf("%d",a[j]);
}