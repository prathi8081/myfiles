#include <stdio.h> 
#include <stdlib.h> 
  
// A linked list node 
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
void append(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    struct Node *last = *head_ref;  /* used in step 5*/
    new_node->data  = new_data; 
    new_node->next = NULL; 
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    } 
  
    while (last->next != NULL) 
        last = last->next; 
  
    last->next = new_node; 
    return; 
} 

void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
} 

void count(struct Node *temp,int cnt)
{
    if(temp!=NULL)
    {
        count(temp->next,cnt+1);
    }
    else
    printf("%d",cnt);
}
int main() 
{ 
  struct Node* head = NULL; 
   append(&head, 6); 
 append(&head, 4); 
 append(&head, 10); 
  count(head,0);
  printf("\n Created Linked list is: "); 
  printList(head); 
  
  return 0; 
}