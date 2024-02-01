#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;

    struct node *next;
};

void display(struct Node *head)
{

    if (head != NULL)
    {

        struct Node *p;

        p = head;

        while (p != NULL)
        {

            printf("ELEMENT is %d\n", p->data);

            p=p->next;
        }
    }
    else
    {

        printf("Link List is empty\n");
    }
}

struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    display(head);

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 14;
    third->next = NULL;
    printf("Linked list before Insertion:-\n");
    display(head);

    head = insertAtIndex(head, 23, 2);

    printf("linked list after insertion:\n");
    display(head);

    return 0;
}