#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedLIstTravarsal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *three = (struct Node *)malloc(sizeof(struct Node));
    struct Node *four = (struct Node *)malloc(sizeof(struct Node));
    struct Node *five = (struct Node *)malloc(sizeof(struct Node));
    struct Node *six = (struct Node *)malloc(sizeof(struct Node));
    struct Node *seven = (struct Node *)malloc(sizeof(struct Node));
    struct Node *eight = (struct Node *)malloc(sizeof(struct Node));
    struct Node *nine = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = three;

    three->data = 3;
    three->next = four;

    four->data = 4;
    four->next = five;

    five->data = 5;
    five->next = six;

    six->data = 6;
    six->next = seven;

    seven->data = 7;
    seven->next = eight;

    eight->data = 8;
    eight->next = nine; 

    nine->data = 9;
    nine->next = NULL;

    linkedLIstTravarsal(head);

    return 0;
}