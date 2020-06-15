#include <iostream>
using namespace std;



struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


void circle(struct TreeNode* root,int total,int* all)
{
	if ((root->left == NULL) && (root->right==NULL))
	{
		total = (total << 1) + root->val;
		*all += total;
		return;
	}

	total = (total << 1) + root->val;
	if (root->left)
	{
		circle(root->left, total,all);
	}

	if (root->right)
	{
		circle(root->right, total,all);
	}
}

int sumRootToLeaf(struct TreeNode* root){

	if (root==NULL)
	{
		return 0;
	}
	int total = 0;
	int all = 0;
	circle(root, total,&all);
	return all;
}


int main()
{

}