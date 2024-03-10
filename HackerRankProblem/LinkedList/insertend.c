//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
//problem
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    
    SinglyLinkedListNode* newNode;
    SinglyLinkedListNode* p;
newNode=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));

newNode->data=data;
     if(head==NULL){
         head=newNode;
     }else{
     
    p=head;    
     
     while(p->next!=NULL){
         p=p->next;
     }
    
     p->next=newNode;
     
    newNode->next=NULL;
     }
   return head;


}