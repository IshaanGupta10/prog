//1. wap to evaluate postfix exp
#include <stdio.h>
#include <ctype.h>
int stack[50];
int top=-1;
int max=49;
void Push (int a)
{
    top++;
    stack[top]=a;
} 
int Pop ()
{
    int a=stack[top];
    top--;
    return a;
}
int main ()
{
    char a[50];
    char b;
    printf("Enter a string of characters.");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        b = a[i];
        if(isdigit(b))
        {
            int x = (int)b-48;
            Push(x);
        }
        else
        {
            int x=Pop();
            int y=Pop();
            if (b=='+')
                Push((x+y));
            else if (b=='-')
                Push((y-x));
            else if (b=='/')
                Push ((y/x));
            else if (b=='*')    
                Push((y*x));
            else
                printf("Wrong Entry.");
        }
    }
    printf("%d",stack[0]);
    
}
