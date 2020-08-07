#include <stdio.h> 
#include <stdlib.h> 
  
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 

struct Node* delete(struct Node*first,int pos,int len)
{
    if(pos>=1 && pos<=len)
    {
        if(pos==1)
        {
            struct Node* t=first;
            while(t->next!=first)
            {
                t=t->next;
            }
            t->next=first->next;
            free(first);
            first=t->next;
        }
        else
        {
            struct Node *p,*q;
            p=first;
            q=NULL;
            for(int i=0;i<pos-1;i++)
            {
                q=p;
                p=p->next;
            }
            q->next=p->next;
            free(p);
        }
    }
    return first;
}

int cntNode(struct Node *first)
{
    struct Node *temp=first;
    int cnt=0;
    do{
        cnt++;
        temp=temp->next;
    }while(temp!=first);
    return cnt;
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
    int len=cntNode(first);
    first = delete(first,1,len);
    Rdisp(first,first);
    return 0;
}