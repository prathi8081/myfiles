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

struct Node* insert(struct Node*p,int data,int insert_point)
{
    struct Node*first=p;
    for(int i=0;i<insert_point-1;i++)
    {
        p=p->next;
    }
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
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
    return first;
}


void createListrecur(struct Node *first,int x,int i)
{
	if(i<5)
	{
		scanf("%d",&x);
		first = insert(first,x,i);
		createListrecur(first,x,i+1);		
	}
	else
		Rdisp(first);
}


int main() 
{ 
  createListrecur(NULL,15,0);
    return 0;
}