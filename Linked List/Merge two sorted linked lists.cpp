/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* MergeLists(Node *headA, Node* headB){
	Node *head, *t;
    if(headA == NULL){
        return headB;
    }
    if(headB == NULL){
        return headA;
    }
	if(headA->data < headB->data){
		head = headA;
		headA = headA->next;
	}
	else{
		head = headB;
		headB = headB->next;
	}
	t = head;
	while(headA != NULL && headB != NULL){
		if(headA->data < headB->data){
			t->next = headA;
			headA = headA->next;
			t = t->next;
		}
		else{
			t->next = headB;
			headB = headB->next;
			t = t->next;
		}
	}
	if(headA != NULL){
		t->next = headA;
	}
	if(headB != NULL){
		t->next = headB;
	}
	return head;
}