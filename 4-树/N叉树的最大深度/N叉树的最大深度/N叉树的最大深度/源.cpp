#include<iostream>
using namespace std;


struct Node {
	int val;
	int numChildren;
	struct Node** children;
	
};


int maxDepth(struct Node* root) {

	if (root==NULL)
	{
		return 0;
	}

	int i = 0;
	int max = 0;
	int dep = 0;
	for (i = 0; i < root->numChildren;i++)
	{
		dep = maxDepth(root->children[i]);
		if (dep>max)
		{
			max = dep;
		}
	}
	return max + 1;

}
