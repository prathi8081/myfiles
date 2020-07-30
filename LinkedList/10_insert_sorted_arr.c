struct Node* insertSortednode(struct Node* p, struct Node *q,int key)
{
	while(p->data < key)
	{
		q=p;
		p=p->next;
	}
	struct Node *t=(struct Node*)malloc(sixeof(struct Node));
	t->data=key;
	t->next=q->next;
	q->next=t;
	else
{
t->next=p;
return t;
}
return NULL;
}

//recursive approach
struct Node* RinsertSortednode(struct Node* p, struct Node *q,int key)
{
	if(p->data < key)
	{
		RinsertSortednode(p->next,p,key);		
	}
	else
	{
		struct Node *t=(struct Node*)malloc(sizeof(struct Node));
		t->data=key;
		if(q!=NULL)
		{
			t->next=q->next;
			q->next=t;
		}
		else
		{
			t->next=p;
			return t;
		}
	return NULL;
}