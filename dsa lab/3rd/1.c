//to find largest and smallest
#include <stdio.h>
int main()
{
    printf("enter n");
    int n,s=0,l=0;
    scanf("%d",&n);
    int a[n];
    printf("enter array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    s=a[1];
    for(int i=0;i<n;i++)
    {
       if(a[i]<s)
       {
        s=a[i];
       }
       if(a[i]>l)
       {
        l=a[i];
       }
    }
    printf("the smallest is %d and largest is %d",s,l);
    return 0;


}