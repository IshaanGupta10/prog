//2. wap to implement circular queue using array and ll
#include <stdio.h>
 int front=-1,rear=-1;
void cqinsert(int queue[],int size,int item)
{
    if((front==0 && rear==(size-1))||(rear+1==front))
    {
        printf("Overflow");
    }
    else if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
    }
    else{
        rear=(rear+1)%size;
    }
    queue[rear]=item;
    

}
int delqueue(int queue[],int size)
{
    int value=0;
    if(front==-1&&rear==-1)
    {
        printf("Underflow");
        return 0;
    }
    else if(front==rear)
    {
        value=queue[front];
        front=-1;
        rear=-1;
    }
    else{
        value=queue[front];
        front=(front+1)%size;
    }
    return value;
}
int main()
{
    printf("Enter the size");
    int n;
    scanf("%d",&n);
    int a[n];
   int m=0;
    while(m!=3)
    {
        printf("\nPress 1 for insert int queue \n 2 for extract from que\n 3 for end\n");
        scanf("%d",&m);
        switch(m)
        {
            case 1:
            printf("Enter the val");
            int r;
            scanf("%d",&r);
            cqinsert(a,(n-1),r);
            break;
            case 2:
          printf ("%d",delqueue(a,(n-1)));
          break;
          default :
          printf("wrong choise");


        }
    }
}