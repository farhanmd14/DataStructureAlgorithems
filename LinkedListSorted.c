#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *ListMerge(struct Node *a, struct Node *b)
{
    struct Node *result = NULL;
    if (a == NULL)
        return b;
    else if (b == NULL)
        return (a);
    if ((a->data) <= (b->data))
    {
        result = a;
        result->next = ListMerge(a->next, b);
    }
    else
    {
        result = b;
        result->next = ListMerge(a, b->next);
    }
    return (result);
}

void FrontBackSplit(struct Node *source, struct Node **frontRef, struct Node **backRef)
{
    struct Node *fast;
    struct Node *slow;
    slow = source;
    fast = source->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}

void MergeSort(struct Node **headRef)
{
    struct Node *head = *headRef;
    struct Node *a;
    struct Node *b;

    if ((head == NULL) || (head->next = NULL))
    {
        return;
    }
    FrontBackSplit(head, &a, &b);
    MergeSort(&a);
    MergeSort(&b);
    *headRef = ListMerge(a, b);
}

void Print(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}
int main()
{
    int n;
    printf("number of elements:");
    scanf("%d", &n);
    struct Node *head = NULL;
    struct Node *p;
    struct Node *prev;
    int i;
    for (i = 0; i < n; i++)
    {

        p = malloc(sizeof(struct Node));
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
        prev = p;
    }
    MergeSort(&head);
    printf("sorted linked list: ");
    Print(head);
    return 0;
}