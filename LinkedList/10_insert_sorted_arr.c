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

struct Node* insertSortednode(struct Node* p, struct Node *q,int key)
{
	while(p->data < key)
	{
		q=p;
		p=p->next;
	}
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=key;
	if(q!=NULL)
	{
	    t->next=q->next;
	    q->next=t;
	}
	else
    {
        t->next=p;
        return t;   
    }
    return NULL;
}

struct Node* RinsertSortednode(struct Node* p, struct Node *q,int key)
{
	if(p->data < key)
	{
		RinsertSortednode(p->next,p,key);		
	}
	else
	{
		struct Node *t=(struct Node*)malloc(sizeof(struct Node));
		t->data=key;
		if(q!=NULL)
		{
			t->next=q->next;
			q->next=t;
		}
		else
		{
			t->next=p;
			return t;
		}
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
    struct Node *new=RinsertSortednode(first,NULL,55);
    if(new!=NULL)
        first = new;
    printList(first);
} 


int main() 
{ 
  create();
    return 0;
}