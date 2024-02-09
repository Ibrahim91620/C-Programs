//https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem?isFullScreen=true
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    
    SinglyLinkedListNode *newNode;
newNode=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    newNode->data=data;
    newNode->next=llist;

return newNode;
}