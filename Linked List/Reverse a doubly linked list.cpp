/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* Reverse(Node* head){
	if(head == NULL){
		return head;
	}
	Node* temp;
	while(head->next != NULL){
		temp = head->next;
		head->next = head->prev;
		head->prev = temp;
		head = temp;
	}
	head->next = head->prev;
	head->prev = NULL;
	return head;
}