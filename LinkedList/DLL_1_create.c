#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node* prev;
    struct Node* next;
    int data;
};

void disp(struct Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void Rdisp(struct Node * temp)
{
    if(temp!=NULL)
    {
        printf("%d",temp->data);
        Rdisp(temp->next);
    }
}

struct Node* createdll()
{
    
    int x;
    scanf("%d",&x);
    if(x!=-1)
    {
        struct Node* first=(struct Node*)malloc(sizeof(struct Node));
        struct Node* last=first;
        last->prev=NULL;
        last->next=NULL;
        last->data=x; 
        scanf("%d",&x);
        while(x!=-1)
        {
            struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=x;
            temp->next=NULL;
            last->next=temp;
            temp->prev=last;
            last=temp;
            scanf("%d",&x);
        }
        return first;
    }
    else
        return NULL;
}


int main()
{
    struct Node * first=createdll();
    disp(first);
    return 0;
}
