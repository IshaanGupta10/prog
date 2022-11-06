#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
    int data;
    struct tree *lc,*rc;
}t;
t* s[50];
int main()
{
t * ptr=(t*)malloc(sizeof(t));
ptr->data = 100;
printf("%d ",ptr);
 s[3]=-(int)ptr;
s[3]=-(int)s[3];
s[3]=(t*)s[3];
 printf("%d ",s[3]->data);
}