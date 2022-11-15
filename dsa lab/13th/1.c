#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
    int data;
    struct tree *lc,*rc;
}t;
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
void min(t* ptr)
{
    
    while(ptr->lc!=NULL)
    {
    ptr=ptr->lc;
    }
    printf("Min is %d",ptr->data);
}
void max(t* ptr)
{
  
    while(ptr->rc!=NULL)
    {
    ptr=ptr->rc;
    }
    printf("Max is %d",ptr->data);
}

int main()
{
 t*Root;
  Root=(t*)malloc(sizeof(t));
    printf("Enter the val");
    scanf("%d",&Root->data);
    Root->lc=NULL;
    Root->rc=NULL;
    buildbst(Root);
    int c;
    printf("\nMENU:\n");
    printf("1.Minimum.\n");
    printf("2.Maximum.\n");
    printf("Enter your choice.\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        min(Root);
        break;
        case 2:
        max(Root);
        break;
        default:
        exit;
    }
}