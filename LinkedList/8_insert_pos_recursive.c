#include<stdio.h>
#include<stdlib.h>
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
void Rdisp(struct Node *temp)
{
    if(temp!=NULL)
    {
        printf("%d ",temp->data);
        Rdisp(temp->next);
    }
}

struct Node* RinsertNode(struct Node* first,struct Node* p, int cur_pos, int insert_point,int data) 
{
    if(cur_pos<insert_point-1)
        RinsertNode(first,p->next,cur_pos+1,insert_point,data);
    else
    {
        struct Node*t=(struct Node*)malloc(sizeof(struct Node));
        t->data=data;
        if(insert_point==0)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=p->next;
            p->next=t;
        }
    }
    return first;
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
    Rdisp(first);
    first=RinsertNode(first,first,0,0,87);
    first=RinsertNode(first,first,0,3,45);
    printf("\n");
    Rdisp(first);
} 


int main() 
{ 
  create();
    return 0;
}