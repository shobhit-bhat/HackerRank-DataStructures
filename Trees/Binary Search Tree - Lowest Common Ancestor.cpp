/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node* Solution(node* root, int v1, int v2){
	if(root == NULL){
		return NULL;
	}
    if(root->data == v1 || root->data == v2)
        return root;
	if(root->data > v1 && root->data < v2){
		return root;
	}
	if(root->data > v2){
		return Solution(root->left,v1,v2);
	}
	if(root->data < v1){
		return Solution(root->right,v1,v2);
	}
	return NULL;
}

node* lca(node* root, int v1,int v2){
	if(v1 < v2){
		return Solution(root,v1,v2);
	}
	else{
		return Solution(root,v2,v1);
	}
}