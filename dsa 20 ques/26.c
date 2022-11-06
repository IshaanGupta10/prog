//WAP to search an element in a array using Linear Search.
#include <stdio.h>
int main ()
{
    int n,s,f=-1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number to be searched.");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            f=i;
            break;
        }
    }
    if(f==-1)
        printf("Not found.");
    else
        printf("Found at %d",f);
}