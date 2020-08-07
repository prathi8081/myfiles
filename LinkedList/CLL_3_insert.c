#include <stdio.h> 
#include <stdlib.h> 
  
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 

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
struct Node* insert(struct Node*first,int pos,int x,int len)
{
    if(pos<=len)
    {
        if(pos==0)
        {
            struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
            temp->data=x;
            if(first==NULL)
            {
                first=temp;
                first->next=first;
            }
            else
            {
                temp->next=first;
                struct Node *t=first;
                while(t->next!=first)
                    t=t->next;
                t->next=temp;
            }
        }
        else
        {
            struct Node *temp=first;
            for(int i=0;i<pos-1;i++)
            {
                temp=temp->next;
            }
            struct Node*new = (struct Node *)malloc(sizeof(struct Node));
            new->data=x;
            new->next=temp->next;
            temp->next=new;
        }
    }
    return first;
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
    printf("%d\n",len);
    first=insert(first,3,52,len);
    Rdisp(first,first);
    return 0;
}