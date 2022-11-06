//double cq ll without using 3rd pointer
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
typedef struct node emp;
emp *head, *tail;
void add()
{
    emp *new;
    new = (emp *)malloc(sizeof(emp));
    printf("\nEnter the value: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->prev = tail;
        tail->next = new;
    }
    tail = new;
    tail->next = head;
    head->prev = tail;
}
void disp(emp *t)
{
    if (t == head)
    {
        for (t = head; t->next != head; t = t->next)
            printf("%3d", t->data);
        printf("%3d", t->data);
        t = t->next;
        printf("%3d", t->data);
    }
    if (t == tail)
    {
        for (t = tail; t->prev != tail; t = t->prev)
            printf("%3d", t->data);
        printf("%3d", t->data);
        t = t->prev;
        printf("%3d", t->data);
    }
}
void display()
{
    int n;
    printf("\n1)From First\n2)From Last\nEnter your choice.\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        disp(head);
        break;
    case 2:
        disp(tail);
        break;
    }
}

void insm(emp *t)
{
    emp *new;
    new = (emp *)malloc(sizeof(emp));
    printf("\nEnter the data you want to insert: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
        new->prev = head->prev;
        new->next = head;
        head->prev->next = new;
        head->prev = new;
        return;
    
}


void main()
{
    int n;
    head = NULL;
    do
    {
        printf("\n1)Add\n2)Display\n4)Search\n5)Insert\n6)Delete\n7)Exit\nEnter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            insm(head);
            break;
        case 6:
            break;
        }
    } while (n != 7);
}