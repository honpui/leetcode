#include<iostream>
using namespace std;



 struct TreeNode {
    int val;
    struct TreeNode *left;
   struct TreeNode *right;
 };




double* averageOfLevels(struct TreeNode* root, int* returnSize){

	if (root == NULL)
	{
		return NULL;
	}

	double* average = (double*)calloc(2000, sizeof(double));


	struct TreeNode** re = (struct TreeNode**)calloc(10000,sizeof(struct TreeNode*));
	int index_before = 0;
	int index_after = 0;
	int count_level = 1;

	re[index_after++] = root;
	int i = 0;
	int j = 0;

	while (index_before<index_after)
	{

		int tmp = 0;
		double total = 0;
		for (i = 0; i < count_level;i++)
		{

			if (re[index_before]->left)
			{
				re[index_after++] = re[index_before]->left;
				tmp++;
				
			}

			if (re[index_before]->right)
			{
				re[index_after++] = re[index_before]->right;
				tmp++;
			}

			total += re[index_before++]->val;
		}
		average[j++] = total / count_level;
		count_level = tmp;

	}

	returnSize[0] = j;
	return average;

}


int main()
{

}