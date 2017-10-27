/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* SortedInsert(Node *head,int data){
	Node* n = new Node;
	n->data = data;
    if(head == NULL){
        n->next = NULL;
        n->prev = NULL;
        return n;
    }
	if(head->data >= data){
		n->next = head;
		n->prev = NULL;
		return n;
	}
	Node *temp = head;
	while(temp->next!=NULL && data > temp->next->data){
		temp = temp->next;
	}
	if(temp->next!=NULL){
		n->next = temp->next;
		n->prev = temp;
		temp->next = n;
		n->next->prev = n;
	}
	else{
		temp->next = n;
		n->next = NULL;
		n->prev = temp;
	}
	return head;
}