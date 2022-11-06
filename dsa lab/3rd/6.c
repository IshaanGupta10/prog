//to find nge of an array
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
     
      for(int i=0;i<n;i++)
    {
     int j=i+1;
        if(a[j]>a[i])
        {
            b[i]=a[j];
        }
        else
        {
            b[i]=-1;
        }
        j++;
    

    }
    b[n-1]=-1;
    printf("Element \t NGE \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t %d\n",a[i],b[i]);
    }
    return 0;
}
