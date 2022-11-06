//to rev an array
#include <stdio.h>
int main()
{
    printf("enter n ");
    int n;
    scanf("%d",&n);
    printf("enter elements ");
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1,j=0;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("The rev array \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}