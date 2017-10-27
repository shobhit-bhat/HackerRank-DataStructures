/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#define loop(n) for(int i = 0; i < n; i++)

Node* InsertNth(Node *head, int data, int position)
{
	Node* a;
	a = new Node;
	a -> data = data;
	if(position == 0)
	{
		a -> next = head;
		return a;
	}
	Node* head1 = head;
	loop(position-1)
	{
		head = head->next;
	}
	a -> next = head -> next;
	head -> next = a;
	return head1;
}

