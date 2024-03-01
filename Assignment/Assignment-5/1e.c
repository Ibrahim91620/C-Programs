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
  

    insert();
    insert();
    insert();

    display();

    delete_from_end();
    printf("after deletion from end");
    display();
   
    
  
    

    return 0;
}