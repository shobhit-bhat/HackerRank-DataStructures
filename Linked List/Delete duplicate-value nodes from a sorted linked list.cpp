/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#include <unordered_map>

Node* RemoveDuplicates(Node *head){
	unordered_map<int,bool> hash;
	Node *temp,*orignal = head;
	hash[head->data] = true;
	while(head ->next != NULL){
		if(hash[head->next->data]){
			temp = head->next;
			head->next = temp->next;
			delete temp;
		}
		else{
			hash[head->next->data] = true;
			head = head->next;
		}
	}
    return orignal;
}