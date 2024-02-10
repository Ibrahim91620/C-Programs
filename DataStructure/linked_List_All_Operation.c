// program for single link list
//  traversal, insertion, deletion
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
 struct node *head = NULL;

void insert(int x)
{

    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node *p;
        p = head;
        while (p->next!= NULL)
        {
            p = p->next;
        }
        p->next = newNode;
    }
}

void display()
{
    if (head != NULL)

    {
        struct node *e;
        e = head;
        while (e!= NULL)
        {
            printf("%d\n", e->data);
            e = e->next;
        }
    }
    else
    {
        printf("The linked list is empty\n");
    }
}

void delete_from_end()
{

    
    if (head == NULL)
    {
        printf("The linklist is already empty");
    }
    else if(head->next==NULL){
       free(head);
       head=NULL;

    }
    else{
        struct node *p;
        p = head;
        while (p->next->next!= NULL)
        {
            p = p->next;
        }
        free(p->next);
        p->next=NULL;
    
    }
}

int main()
{

    int choice;
   
    int num;
  

    insert(34);
    insert(45);
    insert(67);
    display();
    
  
    // while (1)
    // {
    //     printf("Enter a choice\n");
    //     printf("Insert element in list\n");
    //     printf("Traverse link list\n");
    //     printf("Delete an element from end\n");
    //     printf("Exit\n");
    //     scanf("%d", &choice);

    //     switch (choice)
    //     {
    //     case 1:
    //         printf("Enter the element to add in linklist");
    //         scanf("%d", &num);
    //         insert(num, head);
    //         break;
    //     case 2:
    //         traverse(head);
    //         break;
    //     case 3:
    //         delete_from_end(head);
    //         break;
    //     case 4:
    //         exit(0);
    //         break;
    //     }
    // }

    return 0;
}