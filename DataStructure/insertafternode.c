#include<stdio.h>
#include<stdlib.h>


struct Node{

   int data;
   struct Node *next;

};

void display(struct Node *head){
   
   if (head!=NULL)
   {

    struct Node *p;
    p=head;
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    
    
   }else{

    printf("Link list is empty");
   }
   


}

struct Node *insertafterNode(struct Node *head,struct Node *prevNode, int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return head;

}
int main(){
      struct Node *head;
    struct Node *second;
    struct Node *third;
   

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 14;
    third->next = NULL;
     display(head);

    printf("after insertion Of Node:\n");
   head=insertafterNode(head,second,34);
   display(head);
    
    

return 0;
}