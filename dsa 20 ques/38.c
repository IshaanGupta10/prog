//WAP to swap two elements using the concept of pointers.
#include <stdio.h>
void Swap (int *x, int *y);
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Before Swapping : %d %d",a,b);
    Swap(&a,&b);
    printf("After swapping : %d %d",a,b);
}
void Swap (int *x, int *y)
{
    int a=*x;
    *x=*y;
    *y=a;
}