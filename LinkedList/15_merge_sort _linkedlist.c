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

struct Node * merge(struct Node *first,struct Node *second)
{
    struct Node *third,*last;
    if(first->data < second->data)
    {
        third=last=first;
        first=first->next;
        last->next=NULL;
    }
    else
    {
        third=last=second;
        second=second->next;
        last->next=NULL;
    }
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
    struct Node * ans = merge(first,second);
    disprec(ans);
    return 0;
}