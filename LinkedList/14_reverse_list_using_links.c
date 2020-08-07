#include <stdio.h> 
#include <stdlib.h> 
 
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  

void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
}

struct Node* reverse(struct Node *first)
{
    struct Node*p,*q,*r;
    p=first;
    q=r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
    return first;
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
    printList(first);
    struct Node *new=reverse(first);
    printList(new);
} 


int main() 
{ 
  create();
    return 0;
}