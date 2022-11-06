//3. wap to implement circular queue using ll
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* Next;
};
struct Node *Front,*Rear;
struct Node * delque(struct Node *Front,struct Node *Rear)
{

    if(Front==NULL&&Rear==NULL)
    {
        printf("Undeflow");
    }

    Rear=Front;
   do
   {
    Rear=Rear->Next;
   }while(Rear->Next!=Front);
   Rear->Next=Front->Next;
   printf("%d",Front->data);
   Front=Front->Next;
   return Rear;


}
void cqinsert(struct Node *Front,struct Node *Rear,int item)
{
   
   struct Node *new;
   new=(struct Node*)malloc(sizeof(struct Node));
   new->data=item;
    if(Front==NULL&&Rear==NULL)
    {
        Front=new;
        Rear=new;
    }
    else{
   Rear=Front;
   do
   {
    Rear=Rear->Next;
   }while(Rear->Next!=Front);
   Rear->Next=new;
   new->Next=Front;
    }

}
int main()
{
    Front=NULL;
    Rear=NULL;
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
            cqinsert(Front,Rear,r);
            break;
            case 2:
           Rear=delque(Front,Rear);
          break;
          default :
          printf("wrong choise");


        }
    }
}