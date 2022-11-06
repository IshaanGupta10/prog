#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
    int data;
    struct tree *lc,*rc;
}t;
void buildtree(t*ptr)
{
    int ch;
    t*new;
    printf("Enter the val");
    scanf("%d",&ptr->data);
    ptr->lc=NULL;
    ptr->rc=NULL;
    printf("Do you want to enter left child of %d (1/0)\n",ptr->data);
    scanf("%d",&ch);
    if(ch==1)
    {
        new=(t*)malloc(sizeof(t));
        ptr->lc=new;
        buildtree(new);
    }
    printf("Do you want to enter right child of %d (1/0)\n",ptr->data);
    scanf("%d",&ch);
    if(ch==1)
    {
        new=(t*)malloc(sizeof(t));
        ptr->rc=new;
        buildtree(new);
    }
}
void pre(t* ptr)
{
if(ptr==NULL)
{
    return;
}
else
{
    printf("%d ",ptr->data);
    pre(ptr->lc);
    pre(ptr->rc);
}
}
void post(t* ptr)
{
if(ptr==NULL)
{
    return;
}
else
{
    post(ptr->lc);
    post(ptr->rc);
    printf("%d ",ptr->data);
}
}
void inver(t* ptr)
{
if(ptr==NULL)
{
    return;
}
else
{
    inver(ptr->lc);
    printf("%d ",ptr->data);
    inver(ptr->rc);
}
}

void main()
{
    t* Root;
    Root=(t*)malloc(sizeof(t));
    buildtree(Root);
    int c;
    printf("\nMENU:\n");
    printf("1.Execute InOrder Traversal.\n");
    printf("2.Execute PreOrder Traversal.\n");
    printf("3.Execute PostOrder Traversal.\n");
    printf("Enter your choice.\n");
    scanf("%d",&c);
    printf("\nTHE TREE IS AS FOLLOWS:\n");
    switch(c)
    {
        case 1:
        inver(Root);
        break;
        case 2:
        pre(Root);
        break;
        case 3:
        post(Root);
        break;
        default:
        exit;
    }
}

