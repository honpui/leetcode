
#include<iostream>
using namespace std;


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	
};


int rangeSumBST(struct TreeNode* root, int L, int R){

	if (root == NULL)
	{
		return 0;
	}
	if ((root->val>=L) && (root->val <= R))
	{
		return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
	}

	return rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);

}

int main()
{

}