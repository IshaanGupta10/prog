#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a number.");
    scanf("%d",&n);
    int a=n;
    int b=a & 255;
    printf("1st bit (rightmost) is : %d \n",b);
    a=a>>8;
    b=a&255;
    printf("2nd bit is : %d \n",b);
    a=a>>8;
    b=a&255;
    printf("3rd bit is : %d \n",b);
    a=a>>8;
    b=a&255;
    printf("4th bit is : %d \n",b);
}