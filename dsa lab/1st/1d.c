#include <stdio.h>

int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if((a | 1) != a)
        printf("%d is even.", a);
    else
        printf("%d is odd.", a);
    return 0;
}