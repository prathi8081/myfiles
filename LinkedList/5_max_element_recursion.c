#include <stdio.h> 
#include <stdlib.h> 
#include<limits.h>
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
int rmaxNode(struct Node *temp,int max)
{
    if(temp==NULL)
        return max;
    else
    {
        if(temp->data>max)
            rmaxNode(temp->next,temp->data);
        else
            rmaxNode(temp->next,max);
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
    printf("%d",rmaxNode(first,INT_MIN));
} 


int main() 
{ 
  create();
    return 0;
}