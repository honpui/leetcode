#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode*right;
};



bool isUnivalTree(struct TreeNode* root){

	if (root==NULL)
	{
		return true;
	}

	int left_flag = 1;
	int right_flag = 1;
	if (root->left)
	{
		if (root->left->val != root->val)
		{
			left_flag = 0;
		} 
	}
	if (root->right)
	{
		if (root->right->val != root->val)
		{
			right_flag = 0;
		}
	}

	if (left_flag*right_flag == 0)
	{
		return false;
	}

	return isUnivalTree(root->left) && isUnivalTree(root->right);
	

}


int main()
{

	struct TreeNode a = { 1, NULL };

	struct TreeNode b = { 2, NULL };

	struct TreeNode c = { 3, NULL };

	struct TreeNode d = { 4, NULL };


	struct TreeNode e = { 5, NULL };





	return 0;
}