#include <stdio.h> 
#include <stdlib.h> 

struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  

int isSort(struct Node * temp)
{
    int x=-32789;
    while(temp!=NULL && temp->data >= x)
    {
        x=temp->data;
        temp=temp->next;
    }
    if(temp==NULL)
        return 1;
    else
        return 0;
}

int RisSort(struct Node* temp,int x)
{
    if(temp!=NULL && temp->data>=x)
    {
        RisSort(temp->next,temp->data);
    }
    else
    {
        if(temp==NULL)
            return 1;
        else
            return 0;
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
    printf("%d",isSort(first));
    printf("\n%d",RisSort(first,-4543));
} 



int main() 
{ 
  create();
    return 0;
}