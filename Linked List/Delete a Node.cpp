/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#define loop(n) for(int i = 0; i < n; i++)


Node* Delete(Node *head, int position)
{
	Node *head1 = head , *head2;
	if(position == 0)
	{
		head2 = head;
		head = head -> next;
		delete head2;
		return head;
	}
	loop(position-1)
	{
		head = head->next;
	}
	head2 = head -> next;
	head -> next = head -> next -> next;
	delete head2;
	return head1;
}