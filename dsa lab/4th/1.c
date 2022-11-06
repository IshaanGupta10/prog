#include <stdio.h>
#include <stdlib.h>

    
void input(int n,int *a)
{
 printf("Enter elements ");
   for(int i=0;i<n;i++)
   {
    scanf("%d",(a+i));
   }
}
void display(int n,int *a)
{
for(int i=0;i<n;i++)
   {
    printf("%d ",*(a+i));
   }
    
}
void search(int n,int *a)
{
    printf("\nEnter element to search ");
    int s,f=0;
    scanf("%d",&s);
    for(int i=0;i<n;i++)
   {
   if(s==*(a+i))
   {
    printf("Found");
    f++;
   }
   }
   if(f==0)
   {printf("Not Found");
   }
}


int main()
{
   printf("Enter n ");
   int n;
   scanf("%d",&n);
   int *a =(int*)malloc(n*sizeof(int));
  input(n,a);
  display(n,a);
  search(n,a);
  free(a);
  return 0;
}