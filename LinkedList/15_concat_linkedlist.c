#include <stdio.h> 
#include <stdlib.h> 
  
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
void disprec(struct Node *temp)
{
    if(temp!=NULL)
    {
        printf("%d ",temp->data);
        disprec(temp->next);
    }
}

void concat(struct Node *first,struct Node *second)
{
    while(first->next!=NULL)
    {
        first=first->next;
    }
    first->next=second;
}

struct Node* create()
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
    return first;
} 


int main() 
{ 
    struct Node *first= create();
    struct Node *second= create();
    concat(first,second);
    disprec(first);
    return 0;
}