/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *temp, *trav;
    temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        return temp;
    }
    trav = head;
    while(trav->next != NULL)
    {
        trav = trav->next;
    }
    trav->next = temp;
    return head;
}