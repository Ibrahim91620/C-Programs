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

void insert()
{
  int x;
  printf("enter the data");
  scanf("%d",&x);
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
            printf("%d ->", e->data);
            e = e->next;
        }
    }
    else
    {
        printf("The linked list is empty\n");
    }
}


void delete_from_front()
{

     struct  node *temp;
    if (head == NULL)
    {
        printf("The linklist is already empty");
    }
    else{
     temp=head;
     head=temp->next;
     free(temp);


    }
}

int main()
{

    int choice;
   
    int num;
  

    insert();
    insert();
    insert();

    display();

    delete_from_front();
    printf("after deletion from front");
    display();
   
    
  
    

    return 0;
}