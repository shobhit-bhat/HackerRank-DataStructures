/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#include <vector>

int GetNode(Node *head,int positionFromTail){
	vector<int> arr;
	while(head != NULL){
		arr.push_back(head->data);
		head = head->next;
	}
	return arr[arr.size() - positionFromTail - 1];
}