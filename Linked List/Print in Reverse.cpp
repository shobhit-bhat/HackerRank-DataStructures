/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#include <vector>

#define REP(i,n,x) for(int i = x; i < n; i++)
#define pp(x) push_back(x)

void ReversePrint(Node *head)
{
	vector<int> v;
    v.clear();
	while(head!=NULL){
		v.pp(head->data);
		head = head->next;
	}
	for(int i = v.size()-1; i >=0; i--){
		cout<<v[i]<<endl;
	}
}