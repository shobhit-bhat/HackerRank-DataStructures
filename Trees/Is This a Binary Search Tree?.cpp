/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

bool check(Node* root, Node* left, Node* right){
	if(root == NULL){
		return true;
	}
	if(left != NULL && root->data <= left->data){
		return false;
	}
	if(right != NULL && root->data >= right->data){
		return false;
	}
	return check(root->left,left,root) && check(root->right,root,right);
}

bool checkBST(Node* root){
	return check(root,NULL,NULL);
}