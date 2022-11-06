//to display part of an array
#include <stdio.h>
int main()
{
    printf("enter n ");
    int n,r1,r2,f1,f2;
    scanf("%d",&n);
    printf("enter elements ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter start and end ");
    scanf("%d%d",&r1,&r2);
     for(int i=0;i<n;i++)
    {
        if(a[i]==r1)
        {
            f1=i;
            break;
        }
    }
 for(int i=0;i<n;i++)
    {
        if(a[i]==r2)
        {
            f2=i;
        }
    }
    for(int i=f1;i<=f2;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
