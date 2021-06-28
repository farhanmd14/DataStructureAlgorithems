#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* front(struct Node *head,int value)
{
	struct Node *p;
	p=malloc(sizeof(struct Node));
	p->data=value;
	p->next=head;
	return (p);
}
void Print(struct Node* n){
        printf("Linked list:");
        while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
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
    int data;
    printf("adding a note in the front...");
    printf("Enter the you want ot add:");
    scanf("%d",&data);
    head=front(head,data);
Print(head);
    return 0;
}