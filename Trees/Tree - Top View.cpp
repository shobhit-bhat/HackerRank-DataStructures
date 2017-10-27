/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void l(node* root){
	if(root == NULL)
		return;
	l(root->left);
	cout<<root->data<<" ";
}

void r(node* root){
	if(root == NULL)
		return;
    cout<<root->data<<" ";
	r(root->right);
}

void top_view(node * root)
{
	l(root->left);
	cout<<root->data<<" ";
	r(root->right);
}

