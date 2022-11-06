//to accept 5 name and display eldest
#include <stdio.h>
struct person
{
    int age;
    char n[50],c[50];
}p[5];
int main()
{
   
    for(int i=0;i<5;i++)
    { 
    printf("Enter name ");
    scanf("%s",&p[i].n);
    printf("Enter city ");
    scanf("%s",&p[i].c);
    printf("Entter age ");
    scanf("%d",&p[i].age);
    }
    int max=0,f;
    for(int i=0;i<5;i++)
    {
        if(p[i].age>max)
        {
            max=p[i].age;
            f=i;
        }

    }
    printf("the elders is %s of  %s",p[f].n,p[f].c);
    return 0;

}