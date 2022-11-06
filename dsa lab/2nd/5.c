//Write a program to multiply two matrices of order mxn and nxk.
#include <stdio.h>
int main ()
{
    int m,n,k;
    printf("Enter no. of rows in first matrix.");
    scanf("%d",&m);
    printf("Enter no. of column in first matrix.");
    scanf("%d",&n);
    int a[m][n];
    printf("No. of rows in second matrix = %d\n",n);
    printf("Enter no. of column in second matrix.");
    scanf("%d",&k);
    int b[n][k];
    int multi [m][k];
    printf("Enter %d elements for first matrix.",m*n);
    for(int i=0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter %d elements for second matrix.",n*k);
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<k;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst matrix.\n");
    for(int i=0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nsecond matrix.\n");
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<k;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<k;j++)
        {
            multi[i][j]=0;
            for(int l=0;l<n;l++)
            {
                multi[i][j]+=a[i][l]*b[l][j];
            }
        }
    }
    printf("\nResultant matrix.\n");
    for(int i=0;i<m;i++)
    {
        for(int j = 0;j<k;j++)
        {
            printf("%d  ",multi[i][j]);
        }
        printf("\n");
    }
}