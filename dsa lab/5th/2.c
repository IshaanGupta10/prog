#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * Next;
};
void add(struct Node *HEAD,struct Node *New,struct Node *ptr)
{  char ch;
    printf("Do you want to add another node(y/n)");
    getchar();
    scanf("%c",&ch);
while(ch == 'y')
{
        New =(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value ");
        scanf("%d",&New->data);
        New->Next=HEAD;
        ptr->Next=New;
        ptr=ptr->Next;
        printf("Do you want to add another node(y/n)");
        getchar();
        scanf("%c",&ch);
    }

}
void display(struct Node *HEAD,struct Node *New,struct Node *ptr)
{  
    ptr=HEAD;
do
{
   printf("%d ",ptr->data);
   ptr=ptr->Next;
}while (ptr!=HEAD);
}
void search(struct Node *HEAD,struct Node *New,struct Node *ptr)
{  
    int n,f=0;
    printf("Enter val to search ");
    scanf("%d",&n);
    ptr=HEAD;
do
{
    if(n==ptr->data)
    {
        printf("Found");
        f++;
    }
   
   ptr=ptr->Next;
}while (ptr!=HEAD);
if(f==0)
{
    printf("Not Found");
}
}
void count(struct Node *HEAD,struct Node *New,struct Node *ptr)
{  
    int c=0;
    ptr=HEAD;
   do
{
   c++;
   ptr=ptr->Next;
} while (ptr!=HEAD);
printf("%d",c);
}
struct Node * insertft(struct Node *HEAD)
{
   struct Node *new,*ptr;
   new=(struct Node*)malloc(sizeof(struct Node));
   printf("enter the value");
   scanf("%d",&new->data);
   new->Next=HEAD;
   ptr=HEAD;
  do
   {
    ptr=ptr->Next;
   } while (ptr->Next!=HEAD);
   ptr->Next=HEAD;
   
   return HEAD;
}
void insertlt(struct Node *HEAD)
{
   struct Node *new,*ptr;
   new=(struct Node*)malloc(sizeof(struct Node));
   printf("enter the value");
   scanf("%d",&new->data);
   ptr=HEAD;
   while(ptr->Next!=HEAD)
   {
    ptr=ptr->Next;
   }
   ptr->Next=new;
   new->Next=HEAD;

}

struct Node * delft(struct Node *HEAD)
{
    struct Node *ptr=HEAD;
   do
   {
    ptr=ptr->Next;
   }while(ptr->Next!=HEAD);
   ptr->Next=HEAD->Next;
   HEAD=HEAD->Next;


}
void dellt(struct Node *HEAD)
{
    
       struct Node *ptr;
       ptr=HEAD;
      do
       {
       ptr=ptr->Next;
       } while((ptr->Next->Next)!=HEAD);
       
       
       ptr->Next=HEAD;

    

}
void delpos(struct Node *HEAD, int pos)
{
   struct Node *ptr;
   int c=1;
   ptr=HEAD;
   do
   {
    ptr=ptr->Next;
    c++;
   }while(ptr!=HEAD&&c!=pos-1);
   
   ptr->Next=(ptr->Next)->Next;
  
}
void insertpos(struct Node *HEAD,int pos)
{
   struct Node *new,*ptr;
   ptr=HEAD;
   new=(struct Node*)malloc(sizeof(struct Node));
   printf("enter the value");
   scanf("%d",&new->data);
   int c=1;
   do
   {
    ptr=ptr->Next;
    c++;
   }while(ptr!=HEAD&&c!=pos-1);
   new->Next=ptr->Next;
   ptr->Next=new;
  
}



int main()
{
    struct Node *HEAD,*New,*ptr;
    HEAD=NULL;
   
    int n;
    New=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value");
    scanf("%d",&New->data);
    New->Next=HEAD;
    HEAD=New;
    ptr=HEAD;
while(n!=7)
{
     int po,pos;
    int v;
    int r;
    printf("Enter 1 for display 2 for count 3 for search and 4 for add 5 for insert 6 for delete  and 7 to end");
    
    scanf("%d",&n);
    
   
    
    switch(n)
    {
    case 1:
    display(HEAD,New,ptr);
    break;
    case 2:
    count(HEAD,New,ptr);
    break;
    case 3:
    search(HEAD,New,ptr);
    break;
    case 4:
     add(HEAD,New,ptr);
     break;
    case 5:
    printf("enter 1 foe insert at first 2 for at last and 3 for at pos");
    
    scanf("%d",&r);
    switch(r)
    {
        case 1:
        HEAD=insertft(HEAD);
        break;
        case 2:
        insertlt(HEAD);
        break;
        case 3:
        printf("Enter a pos");
        scanf("%d",&pos);
        insertpos(HEAD,pos);
        break;
        default:
         printf("Wrong input");
    }
    break;
    case 6:
    printf("enter 1 foe delete at first 2 for at last and 3 for at pos");
    
    scanf("%d",&v);
    switch(v)
    {
        case 1:
        HEAD = delft(HEAD);
        break;
        case 2:
        dellt(HEAD);
        break;
        case 3:
        printf("Enter a pos");
        
        scanf("%d",&po);
        delpos(HEAD,po);
        break;
        default:
         printf("Wrong input");
    }
    break;
    

   default:
   printf("Wrong input");
    }
}
}


