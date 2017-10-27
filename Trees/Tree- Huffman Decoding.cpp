/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/

void decode_huff(node * root,string s){
	int t = 0;
	node* point = root;
	while(t != s.size()+1){
		if(point->data != '\0'){
			cout<<point->data;
			point = root;
			t--;
		}
		else if(s[t] == '0'){
			point = point->left;
		}
		else
			point = point->right;
		t++;
	}
}