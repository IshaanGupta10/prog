#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Enter value of 1st byte (leftmost)");
    scanf("%d",&a);
    printf("Enter value of 2nd byte ");
    scanf("%d",&b);
    printf("Enter value of 3rd byte ");
    scanf("%d",&c);
    printf("Enter value of 4th byte ");
    scanf("%d",&d);
    int e;
    e=a;
    e=e<<8;
    e = e|b;
    e=e<<8;
    e=e|c;
    e=e<<8;
    e=e|d;
    printf("%d",e);
}