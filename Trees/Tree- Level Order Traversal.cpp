/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node *root) {
	if(root == NULL){
		return;
	}
	queue<node*> st;
	st.push(root);
	while(!st.empty()){
		root = st.front();
		if(root->left!=NULL){
			st.push(root->left);
		}
		if(root->right!=NULL){
			st.push(root->right);
		}
		cout<<root->data<<" ";
		st.pop();
	}
}