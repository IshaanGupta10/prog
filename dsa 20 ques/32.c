//WAP that finds the sum of diagonal elements of a mxn matrix.
#include <stdio.h>
int main ()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter %d elements.",m*n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i==j)
                s+=a[i][j];
        }
    }
    printf("\nSum: %d",s);
}