#include <stdio.h>

int main()
{
     int a;
    printf("Enter a num");
    scanf("%d",&a);
    if((a ^ 1)==(a+1))
    {
        printf("even");
        
    }
    else
    {
        printf("odd");
    }

    return 0;
}