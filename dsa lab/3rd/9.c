//to make an array with even elements first
#include <stdio.h>
int main()
{
    printf("enter n ");
    int n,f=0;
    scanf("%d",&n);
    printf("enter elements ");
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
        b[f]=a[i];
       
        f++;
       }
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[f]=a[i];
            f++;
        }
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}

     