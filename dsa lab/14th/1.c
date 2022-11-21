//to make a hight balance tree
// to calc hight of bst
#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
    int data;
    struct tree *lc,*rc;
}t;
int max=-1;
void buildbst(t* ptr)
{
     int ch;
     printf("Do you want to enter  (1/0)\n");
    scanf("%d",&ch);
    if(ch==1)
    {
 t*new;
  new=(t*)malloc(sizeof(t));
    printf("Enter the val");
    scanf("%d",&new->data);
    new->lc=NULL;
    new->rc=NULL;
   
    if(new->data<ptr->data)
    {
        ptr->lc=new;
        buildbst(new);
    }
    else if(new->data>ptr->data)
    {
        ptr->rc=new;
        buildbst(new);
    }
    }
}
void ckch(int h)
{
    if(h>max)
    max=h;
}
void calch(t* ptr,int  h)
{
  if(ptr==NULL)
  return;
  h++;
  ckch(h);
  calch(ptr->lc,h);
  calch(ptr->rc,h);
  
}
int main()
{
 t*Root;
  Root=(t*)malloc(sizeof(t));
    printf("Enter the val");
    scanf("%d",&Root->data);
    buildbst(Root);
    calch(Root,max);
    printf("%d",max);
}