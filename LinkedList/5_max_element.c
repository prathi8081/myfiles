#include <stdio.h> 
#include <stdlib.h> 
#include<limits.h>
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
int maxNode(struct Node *temp)
{
    int max = INT_MIN;
    while(temp!=NULL)
    {
        if(temp->data>max)
            max=temp->data;
        temp=temp->next;
    }
    return max;
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
    printf("%d",maxNode(first));
} 


int main() 
{ 
  create();
    return 0;
}