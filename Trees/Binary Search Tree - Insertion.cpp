/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node* root, int value)
{
	if(root == NULL)
	{
		root = new node();
		root->left = NULL;
		root->right = NULL;
		root->data = value;
	}
	else if(value <= root->data){
		  root->left = insert(root->left,value);
    }
	else
    {
		  root->right = insert(root->right,value);
    }
    return root;
}