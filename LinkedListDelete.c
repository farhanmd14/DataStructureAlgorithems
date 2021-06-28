#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void Print(struct Node* n){
        //printf("Linked list:");
        while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
        }
    }
    
/* Given a reference (pointer to pointer) to the head of a list
and an int inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

/* Given a reference (pointer to pointer) to the head of a list
and a position, deletes the node at the given position */
void deleteNode(struct Node **head_ref, int position)
{
// If linked list is empty
if (*head_ref == NULL)
	return;

// Store head node
struct Node* temp = *head_ref;

	// If head needs to be removed
	if (position == 0)
	{
		*head_ref = temp->next; // Change head
		free(temp);			 // free old head
		return;
	}

	// Find previous node of the node to be deleted
	for (int i=0; temp!=NULL && i<position-1; i++)
		temp = temp->next;

	// If position is more than number of nodes
	if (temp == NULL || temp->next == NULL)
		return;

	// Node temp->next is the node to be deleted
	// Store pointer to the next of node to be deleted
	struct Node *next = temp->next->next;

	// Unlink the node from linked list
	free(temp->next); // Free memory

	temp->next = next; // Unlink the deleted node from list
}

int main(){
    int n;
    printf ("number of elements:");
    scanf("%d",&n);
    struct Node* head=NULL;
    struct Node*p;
    struct Node* prev;
    int i;
    for (i=0;i<n;i++) {
            p=malloc(sizeof(struct Node));
            scanf("%d",&p->data);
            p->next=NULL;
            if(head==NULL)
                head=p;
            else
             prev->next=p;
         prev=p;
        }
    Print(head);
    deleteNode(&head, 4);
	printf("\nLinked List after Deletion at position 4: ");
	Print(head);
    return 0;
}