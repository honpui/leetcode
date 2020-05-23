#include <iostream>
using namespace std;




struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


struct TreeNode* construct(int*num ,int start,int finish)
{
	if (finish-start == 1)
	{
		struct TreeNode* re = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
		re->val = num[finish];
		struct TreeNode* re1 = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
		re1->val = num[start];
		re->left = re1;
		return re;
	}

	if (start==finish)
	{
		struct TreeNode* re = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
		re->val = num[finish];
		return re;
	}


	int middle = (start + finish) / 2;
	struct TreeNode* re = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
	re->val = num[middle];

	re->left = construct(num, start, middle - 1);
	re->right = construct(num, middle + 1, finish);
	return re;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){

	if (nums==NULL || numsSize==0)
	{
		return NULL;
	}

	struct TreeNode* re = construct(nums, 0, numsSize - 1);
	return re;
}

int main()
{

}