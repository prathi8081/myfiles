void createlist()
{
	struct Node* first=NULL;
	int x;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&x);
		first = insertNode(first,x,i);
	}
	display(first);
}


void createListrecur(struct Node *first,int x,int i)
{
	if(i<5)
	{
		scanf("%d",&x);
		first = insertNode(first,x,i);
		createListrecur(first,x,i+1);		
	}
	else
		display(first);
}

//in main: createListrecur(NULL,-1,0);

		
	