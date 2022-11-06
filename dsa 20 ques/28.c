//WAP to sort the elements of the array in ascending order using Bubble Sort technique.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if (a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}