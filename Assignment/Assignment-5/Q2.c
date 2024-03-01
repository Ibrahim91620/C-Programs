#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

void traversal(){
    struct Node *temp;
    temp = head;
    if(head == NULL){
        printf("list is empty\n");
    }else{
        while(temp!=NULL){
            printf("%d, ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}


void insertAtFront(int x){
    struct Node *newNode, *temp;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->next = NULL;
    newNode->data = x;
    
    if(head==NULL){
        temp = head = newNode;
    }else{
         temp = head;
         newNode->next = temp;
         head = newNode;
    }
}

void deleteif_found(int x){
    struct Node *temp,*prevNode;
    temp=head;
    if (head==NULL)
    {
        printf("link list is empty");
    }
    else{
        if (head->data==x)
        {
            head=NULL;
            free(temp);
            
        }else{
            while (temp->data!=x && temp->next!=NULL)
            {
                prevNode=temp;
                temp=temp->next;
            }
            if (temp->data==x)
            {
                prevNode->next=temp->next;
                free(temp);
            }else{
                printf("%d is not found in the list",x);
            }
            
        }
        
    }
    

 
}


int main(){

   int choice,x,y;

  
  while (1)
  {

     printf("enter the option to perform operations");
   scanf("%d",&choice);
   
    switch (choice)
    {
    case 1:
    printf("enter the data to insert front side");
    scanf("%d",&x);
        insertAtFront(x);
        break;
    case 2:
    printf("choose the number to delete ");
    scanf("%d",&y);
    deleteif_found(y);
    break;
    case 3:
    traversal();
    break;
    case 4: exit(0);
    break;
    default:
        break;
    }
  }
  
    
   
 



return 0;
}