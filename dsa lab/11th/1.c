//wap to binry tree using arrya and ll also traverse using recursive and non recursive
#include <stdio.h>
int t[20];
void buildtree(int index,int item)
{
    int ch,data;
    t[index]=item;
    printf("Do you want to enter left child of %d (1/0)\n",item);
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Enter \n");
        scanf("%d",&data);
        buildtree((2*index)+1,data);
    }
    printf("Do you want to enter right child of %d (1/0)\n",item);
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Enter \n");
        scanf("%d",&data);
        buildtree((2*index)+2,data);
    }
}
void main()
{
    for(int i=0;i<20;i++)
    {
        t[i]=-1;
    }
    int i1;
    printf("Enter root node\n");
    scanf("%d",&i1);
    buildtree(0,i1);
    printf("\nTree = ");
    for(int i=0;i<20;i++)
    {
        if(t[i]==-1)
        printf("-");
        else
        printf("%d ",t[i]);
    }

}