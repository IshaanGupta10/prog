/* WAP that takes two operands and one operator from the user 
and perform the operation and prints the result by using Switch statement. */
#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter.");
    scanf("%d%d",&a,&b);
    printf("Enter operand + - * /");
    getchar();
    char c;
    scanf("%c",&c);
    float n=0;
    switch(c)
    {
        case '+' : n=a+b; break;
        case '-' : n=a-b; break;
        case '*' : n=a*b; break;
        case '/' : n=(float)a/b; break;
        default : printf("Try Again.");
    }
    printf("Result = %f",n);
}