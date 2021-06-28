#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

//printing the linked list...
void Print(struct Node* n){
        printf("Linked list:");
        while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
         }
    }
    
    int searchNode(struct Node *head,int key)
{
    struct Node *temp = head;

    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
         //key found return 1.
         if(temp->data == key)
             return 1;
         temp = temp->next;
    }
    //key not found
    return -1;
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
    int x;
    printf("\nEnter element you want to search:");
    scanf("%d",&x);
      if(searchNode(head,x) == 1)
         printf("\nFound");
     else
         printf("\nNot Found");

     return 0;
}