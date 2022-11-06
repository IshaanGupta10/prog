//to sort an array
#include <stdio.h>
int main()
{
    printf("enter n ");
    int n,t;
    scanf("%d",&n);
    printf("enter elements ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        { 
        if(a[j]>a[i])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        }

    }
    printf("Sorted array\n ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
       
    }
    return 0;
}
