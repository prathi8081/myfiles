#include <stdio.h> 
#include <stdlib.h> 
  
// A linked list node 
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
struct Node*search(struct Node* temp,int key)
{
    while(temp!=NULL)
    {
        if(temp->data==key)
            return temp;
        temp=temp->next;
    }
    return NULL;
}

struct Node* rsearch(struct Node* temp,int key)
{
    if(temp==NULL)
        return NULL;
    if(temp->data==key)
        return temp;
    return rsearch(temp->next,key);
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
    printf("%d",rsearch(first,4)->data);
} 


int main() 
{ 
  create();
    return 0;
}