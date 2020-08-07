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

struct Node *delete(struct Node *p,struct Node *q,int pos)
{
    if(pos==1)
    {
        struct Node*t = p->next;
        free(p);
        return t;
    }
    else
    {
        int i=1;
        while(i<pos)
        {
            q=p;
            p=p->next;
            i++;
        }
        q->next=p->next;
        free(p);
        return NULL;
    }
}

struct Node* Rdelete(struct Node *p,struct Node *q,int i,int pos)
{
    if(pos==1)
    {
        struct Node*t = p->next;
        free(p);
        return t;
    }
    else if(i<pos)
    {
        Rdelete(p->next,p,i+1,pos);
    }
    else
    {
        q->next=p->next;
        free(p);
        return NULL;
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
    printList(first);
    struct Node *new=Rdelete(first,NULL,1,3);
    if(new!=NULL)
        first = new;
    printList(first);
} 


int main() 
{ 
  create();
    return 0;
}