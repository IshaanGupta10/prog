/*WAP that inputs two arrays and saves sum of corresponding elements 
of these arrays in a third array and prints them.*/
#include <stdio.h>
int main ()
{
    int n1,n2,n3;
    printf("Enter n1 n2.");
    scanf("%d%d",&n1,&n2);
    int a[n1];
    int b[n2];
    n3=n1<n2?n1:n2;
    int c[n3];
    for(int i=0;i<n1;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n2;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<n3;i++)
        c[i]=a[i]+b[i];
    for (int i=0;i<n3;i++)
        printf("%d ",c[i]);
}