/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/

#include <unordered_map>

int FindMergeNode(Node *headA, Node *headB){
	unordered_map<Node*,bool> hash;
	while(headA != NULL && headB != NULL){
		if(hash[headA]){
			return headA->data;
		}
		hash[headA] = true;
		if(hash[headB]){
			return headB->data;
		}
		hash[headB] = true;
		headA = headA->next;
		headB = headB->next;
	}
	while(headA!=NULL){
		if(hash[headA]){
			return headA->data;
		}
		headA = headA->next;
	}
	while(headB!=NULL){
		if(hash[headB]){
			return headB->data;
		}
		headB = headB->next;
	}
	return 0;
}