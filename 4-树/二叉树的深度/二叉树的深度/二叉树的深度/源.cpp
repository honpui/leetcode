#include<iostream>
using namespace std;


struct TreeNode {
   int val;
   struct TreeNode *left;
   struct TreeNode *right;
};

int maximum(int a,int b)
{
	return (a > b ? a+1 : b+1);
}

int maxDepth(struct TreeNode* root){

	if (root==NULL)
	{
		return 0;
	}

	return maximum(maxDepth(root->left),maxDepth(root->right));

}



int main()
{

}