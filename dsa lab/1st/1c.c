#include <stdio.h>

int main()
{
     int a;
    printf("Enter a num");
    scanf("%d",&a);
    if((a>>1)<<1==a)
    {
        printf("even");
        
    }
    else
    {
        printf("odd");
    }

    return 0;
}