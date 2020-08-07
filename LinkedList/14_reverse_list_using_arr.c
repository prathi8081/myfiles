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

  
void reverse(struct Node* first,int len)
{
    int arr[len],i=0;
    struct Node* temp=first;
    while(temp!=NULL)
    {
        arr[i]=temp->data;
        i++;
        temp=temp->next;
    }
    temp=first;
    i-=1;
    while(temp!=NULL)
    {
        temp->data=arr[i];
        i--;
        temp=temp->next;
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
    int len=0;
    while(x!=-1)
    {
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=x;
        last->next=temp;
        last=temp;
        last->next=NULL;
        len++;
        scanf("%d",&x);
    }
    reverse(first,len);
    printList(first);
} 


int main() 
{ 
  create();
    return 0;
}