//to search an array
#include <stdio.h>
int main()
{
    printf("enter n ");
    int n;
    scanf("%d",&n);
    printf("enter elements ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter element to find ");
    int s,f=0;
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("it is on the %dth pos",i+1);
            f++;
        }
      
    }
    if(f==0)
    {
        printf("not found");
    }
    return 0;
}

