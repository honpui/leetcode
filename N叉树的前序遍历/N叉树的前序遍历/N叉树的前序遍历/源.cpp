#include<iostream>
using namespace std;



struct Node {
    int val;
    int numChildren;
    struct Node** children;
};



void recursive(struct Node* root, int* array, int* returnSize)
{
	if (root==NULL)
	{
		return;
	}
	
	array[(*returnSize)++] = root->val;
	
	int i = 0;
	for (i = 0; i < root->numChildren;i++)
	{

		recursive(root->children[i],array,returnSize);
	}
}

int* preorder(struct Node* root, int* returnSize) {

	int* array=(int*)calloc(10000,sizeof(int));
	*returnSize = 0;/* 记得要进行初始化 */
	recursive(root,array,returnSize);

	return array;
}

int main()
{
}