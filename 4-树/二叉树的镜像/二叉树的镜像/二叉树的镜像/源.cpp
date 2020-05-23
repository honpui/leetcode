#include<iostream>
using namespace std;


struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
};

struct TreeNode* mirrorTree(struct TreeNode* root){
	if (!root)
	{
		return NULL;
	}

	struct TreeNode* tmp = root->left;
	root->left = root->right;
	root->right = tmp;

	mirrorTree(root->left);
	mirrorTree(root->right);
	return root;

}

int main()
{

}