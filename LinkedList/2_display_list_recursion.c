#include <stdio.h> 
#include <stdlib.h> 
  
// A linked list node 
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
//display linked list recursively
void disprec(struct Node *temp)
{
    if(temp!=NULL)
    {
        printf("%d ",temp->data);
        disprec(temp->next);
    }
}


void create()
{ 
    struct Node *first,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    int x;
    scanf("%d",&x);
    first->data=x;
    last=first;
    last->next=NULL;
    scanf("%d",&x);
    while(x!=-1)
    {
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=x;
        last->next=temp;
        last=temp;
        last->next=NULL;
        scanf("%d",&x);
    }
    disprec(first);
} 


int main() 
{ 
  create();
    return 0;
}