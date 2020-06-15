#include <iostream>
using namespace std;


struct TreeNode {
   int val;
    struct TreeNode *left;
     struct TreeNode *right;
 };



//struct TreeNode* increasingBST(struct TreeNode* root){
//
//
//	if ((root == NULL) )
//	{
//		return NULL;
//	}
//
//
//	
//	struct TreeNode* re = increasingBST(root->left);
//
//	if (re!=NULL)
//	{
//		re->right = root;
//		re->left = NULL;
//	}
//
//	root->left = NULL;
//	root->right = increasingBST(root->right);
//	return root;
//	
//}

//void increasing(struct TreeNode* root,struct TreeNode* *head,int* index){
//	
//	
//	if ((root == NULL))
//	{
//		return;
//	}
//
//	increasing(root->left, head, index);
//
//	head[(*index)++] = root;
//
//	increasing(root->right, head, index);
//
//	return ;
//
//}
//
//
//struct TreeNode* increasingBST(struct TreeNode* root){
//
//
//	if ((root == NULL))
//	{
//		return NULL;
//	}
//
//	struct TreeNode* *head = (struct TreeNode* *)calloc(1000,sizeof(struct TreeNode*));
//	int index = 0;
//
//	increasing(root,head,&index );
//
//	int i = 0;
//
//	for (i = 0; i < index-1;i++)
//	{
//		head[i]->right = head[i + 1];
//		head[i]->left = NULL;
//	}
//
//	
//	return head[0];
//
//}



struct TreeNode* cur;


void increasing(struct TreeNode* root){


	if ((root == NULL))
	{
		return;
	}

	increasing(root->left);

	cur->right = root;
	cur->left = NULL;
	cur = root;

	increasing(root->right);

	return;

}


struct TreeNode* increasingBST(struct TreeNode* root){


	if ((root == NULL))
	{
		return NULL;
	}

	struct TreeNode ans;
	cur = &ans;

	increasing(root);

	return ans.right;

}


int main()
{
	struct TreeNode root1 = {1,NULL,NULL};
	struct TreeNode root2 = { 2, NULL, NULL };
	struct TreeNode root3 = { 3, NULL, NULL };
	struct TreeNode root4 = { 4, NULL, NULL };

	root1.left = &root2;
	root1.right = &root3;

	root2.left = & root4 ;

	struct TreeNode* re = increasingBST(&root1);
	return 0;
}