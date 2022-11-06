//for dd array
#include <stdio.h>
int main()
{
     printf("enter n ");
    int n,f=0;
    scanf("%d",&n);
    printf("enter elements ");
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {     
        scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {     
        if(a[i][j]!=0)
        {
            f++;
        }
        }
    }
    printf("there are %d non zero elements",f);
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            s+=a[j][i];
        }
    }
   printf("\nThe sum is %d\n",s);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {     
      
        printf("%d ",a[i][j]);
       
        }
    }
 int product = 1;
     
   
    for (int i = 0; i < n; i++)
    {
 
        product = product * a[i][i];
 
       
        product = product * a[i][n - i - 1];
    }
 
  
    if (n % 2 == 1)
    {
        product = product / a[n / 2][n / 2];
    }
    printf("\n The product is %d ",product);

}