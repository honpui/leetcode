#include<iostream>
using namespace std;



struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
};

struct TreeNode* createNode(int* nums, int start, int finish)
{
	if (start>finish)
	{
		return NULL;
	}
	/*if ((finish - start) == 1)
	{
		struct TreeNode* b = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
		b->val = nums[finish];
		struct TreeNode* a = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
		a->val = nums[start];
		a->right = b;
		return a;
	}*/

	if (finish == start)
	{
		struct TreeNode* c = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
		c->val = nums[finish];
		return c;
	}

	struct TreeNode* d = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
	d->val = nums[(finish - start) / 2 + start];
	d->left = createNode(nums, start, (finish - start) / 2 + start - 1);
	d->right = createNode(nums, (finish - start) / 2 + start + 1, finish);
	return d;
}


struct TreeNode* sortedArrayToBST(int* nums, int numsSize){

	return createNode(nums, 0, numsSize - 1);

}

int main()
{
	int nums[] = {-10,-3,0,5,9};
	int numsSize = sizeof(nums) / sizeof(int);
	TreeNode* re = sortedArrayToBST(nums, numsSize);
	return 0;
}