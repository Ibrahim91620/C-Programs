//  https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem?isFullScreen=true
// This is an to practice traversing a linked list. Given a pointer to the head node of a linked list, print each node's  element, one per line. If the head pointer is null (indicating the list is empty), there is nothing to print.

// Function Description

// Complete the printLinkedList function in the editor below.

// printLinkedList has the following parameter(s):

// SinglyLinkedListNode head: a reference to the head of the list
// Print

// // For each node, print its  value on a new line (console.log in Javascript).
void printLinkedList(SinglyLinkedListNode* head) {
  
       SinglyLinkedListNode* p;
       p=head;
       while(p!=NULL){
           printf("%d\n",p->data);
           p=p->next;
       }
       
       
   

}