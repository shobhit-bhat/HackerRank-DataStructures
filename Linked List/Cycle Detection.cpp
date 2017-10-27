/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

#include <unordered_map>

bool has_cycle(Node* head){
	unordered_map<Node*,bool> hash;
	while(head!=NULL){
		if(hash[head]){
			return true;
		}
		else{
			hash[head] = true;
		}
		head = head->next;
	}
	return false;
}