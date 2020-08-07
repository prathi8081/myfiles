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
int isloop(struct Node *temp)
{
    struct Node*p,*q;
    p=q=temp;
    do{
        p=p->next;
        q=q->next;
        if(q!=NULL)
            q=q->next;
    }while((p!=NULL && q!=NULL) && p!=q);
    return p==q?1:0;
}

int Risloop(struct Node *temp,struct Node *p,struct Node *q)
{
    if(p==q || p==temp)
    {
        q->next!=NULL?Risloop(temp,p->next,q->next->next):Risloop(temp,p->next,q->next);
    }
    else if ((p!=NULL && q!=NULL) && p!=q)
    {
        q->next!=NULL?Risloop(temp,p->next,q->next->next):Risloop(temp,p->next,q->next);
    }
    else
        return p==q?1:0;
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
    int flag=isloop(first);
    flag==1?printf("Yes"):printf("No");
    return 0;
}