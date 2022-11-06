//Write a program to multiply two matrices of order n*n.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    int multi [n][n];
    printf("Enter %d elements for first matrix.",n*n);
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter %d elements for second matrix.",n*n);
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst matrix.\n");
    for(int i=0;i<n;i++)
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
        for(int j = 0;j<n;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            multi[i][j]=0;
            for(int l=0;l<n;l++)
            {
                multi[i][j]+=a[i][l]*b[l][j];
            }
        }
    }
    printf("\nResultant matrix.\n");
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d  ",multi[i][j]);
        }
        printf("\n");
    }
}