#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    
};


struct Node *head=NULL;
void traversal(){
    
    if(head!=NULL){
    struct Node *p;
    p=(struct Node *)malloc(sizeof(struct Node));
    p=head;
    while(p!=NULL){
        printf("The element is:- %d\n",p->data);
        p=p->next;
    }
    }


else{

    printf("The linked lIst is Empty");
}
}

void insertatbegin(int x){
 


    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next=head;
    head=newNode;
    
}

    
    




   
   


 
  

int main(){

insertatbegin(55);
insertatbegin(67);
// traversal();

insertatbegin(45);
// printf("after insertion at beginning node\n ");
// traversal();
sort();

traversal();


return 0;
}