#include "trees.h"

void treeToVector(Node * n, vector<int> &v) {
	if(n->left) treeToVector(n->left, v);
	v.push_back(n->data);
	if(n->right) treeToVector(n->right,v);
	return;
}
bool checkBST(Node* root) {
	vector<int> v;
	treeToVector(root,v);
	for(auto i = v.begin()+1; i != v.end(); ++i){
		if(*(i-1) >= *i) {
			return false;
		}
	}
	return true;

}

