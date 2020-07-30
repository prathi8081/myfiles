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

  
void removeDup(struct Node *p,struct Node *q)
{
    while(q!=NULL)
    {
            if(p->data==q->data)
            {
                p->next=q->next;
                free(q);
                q=p->next;
            }
        else
        {
            p=p->next;
            q=q->next;
        }
    }
}

void RremoveDup(struct Node*p,struct Node *q)
{
    if(q!=NULL)
    {
        if(p->data==q->data)
        {
            p->next=q->next;
            RremoveDup(p,p->next);
        }
        else
            RremoveDup(p->next,q->next);
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
    RremoveDup(first,first->next);
    //removeDup(first,first->next);
    printList(first);
} 


int main() 
{ 
  create();
    return 0;
}