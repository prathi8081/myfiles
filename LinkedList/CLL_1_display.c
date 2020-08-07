#include <stdio.h> 
#include <stdlib.h> 
  
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
void disp(struct Node *head)
{
    struct Node*temp=head;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }while(head!=temp);
}

void Rdisp(struct Node *head,struct Node* temp)
{
    static int flag=0;
    if(flag==0 || temp!=head)
    {
        flag=1;
        printf("%d ",temp->data);
        Rdisp(head,temp->next);
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
    last->next=first;
    return first;
} 


int main() 
{ 
    struct Node* first=create();
    Rdisp(first,first);
    return 0;
}