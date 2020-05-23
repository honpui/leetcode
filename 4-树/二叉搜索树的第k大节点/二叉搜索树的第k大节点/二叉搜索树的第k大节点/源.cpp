#include<iostream>
using namespace std;


struct TreeNode {
    int val;
   struct TreeNode *left;
   struct TreeNode *right;
};


int circle(struct TreeNode* root,int* k,int* num)
{
	if (root == NULL)
	{
		return 0;
	}

	if (circle(root->right, k, num))
	{
		return 1;
	}

	/* 记录这个节点的值 */

	if (root)
	{
		(*k)--;
		if ((*k) == 0)
		{
			(*num) = root->val;
			return 1;
		}
	}
	

	if (circle(root->left, k, num))
	{
		return 1;
	}
	return 0;
}

int kthLargest(struct TreeNode* root, int k){

	if (root==NULL)
	{
		return 0;
	}

	int num = 0;
	circle( root, &k, &num);
	return num;

}


int main()
{
	struct TreeNode a = {3,NULL,NULL};
	struct TreeNode b = { 1, NULL, NULL };
	struct TreeNode c = { 4, NULL, NULL };
	struct TreeNode d = { 2, NULL, NULL };

	a.left = &b;
	a.right = &c;
	b.right = &d;

	int re = kthLargest(&a, 1);
	return 0;
}