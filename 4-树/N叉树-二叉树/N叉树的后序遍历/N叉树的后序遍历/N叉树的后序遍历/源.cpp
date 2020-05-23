
#define _CRTDBG_MAP_ALLOC
#include<iostream>
using namespace std;


 struct Node {
     int val;
     int numChildren;
     struct Node** children;
 };



 /* 递归版本 */
// void recure(struct Node*root,int * index,int* re)
// {
//	 if (root==NULL)
//	 {
//		 return;
//	 }
//	 int i = 0;
//	 for (i = 0; i < root->numChildren;i++)
//	 {
//		 recure(root->children[i], index, re);
//		 //re[(*index)++] = root->children[i]->val;
//	 }
//	 re[(*index)++] = root->val;
// }
//
//
//int* postorder(struct Node* root, int* returnSize) {
//
//	int* re = (int*)calloc(10000, sizeof(int));
//	int index = 0;
//	recure(root, &index, re);
//	*returnSize = index;
//	return re;
//
//}

 /* 非递归版本 */

 struct package 
 {
	 struct Node* cur;
	 int child_index;/* 记录当前访问到改节点的第几个子节点 */
 };

 int* postorder(struct Node* root, int* returnSize) {
 
	 struct package* array = (struct package*)calloc(10000, sizeof(struct package));

	 int* re = (int*)calloc(10000, sizeof(int));

	 array[0].cur = root;
	 array[0].child_index = 0;

	 int array_index = 0;
	 int re_index = 0;
	 int i = 0;

	 if (root==NULL)
	 {
		 *returnSize = re_index;
		 return re;
	 }
	 while (array_index!=-1)
	 {
		 if (array[array_index].child_index == array[array_index].cur->numChildren)
		 {
			 
			 re[re_index++] = array[array_index].cur->val;
			 if (array_index>0)
			 {
				 array[--array_index].child_index++;
			 }
			 else
			 {
				 array_index--;
			 }
			 
			 continue;
		 }

		 struct Node*  curnode= array[array_index].cur->children[array[array_index].child_index];/* 取出当前要出来的节点 */
		 
		 if (curnode->numChildren==0)
		 {
			 re[re_index++] = curnode->val;/* 是叶节点，记录 */

			 array[array_index].child_index++;
			 continue;
		 }

		 array[++array_index].cur = curnode;
		 array[array_index].child_index = 0;

	 }

	 *returnSize = re_index;
	 return re;
 }

int main()
{
	struct Node cur1 = { 0, 0, NULL }, cur2 = { 0, 0, NULL }, cur3 = { 0, 0, NULL }, cur4 = { 0, 0, NULL }, cur5 = { 0, 0, NULL }, cur6 = { 0, 0, NULL };
	cur1.numChildren = 3;
	cur1.children = (struct Node**) calloc(cur1.numChildren, sizeof(struct Node*));
	cur1.children[0] = &cur3; cur1.children[1] = &cur2; cur1.children[2] = &cur4;

	cur3.numChildren = 2;
	cur3.children = (struct Node**) calloc(cur3.numChildren, sizeof(struct Node*));
	cur3.children[0] = &cur5;
	cur3.children[1] = &cur6;

	cur1.val = 1;
	cur2.val = 2;
	cur3.val = 3;
	cur4.val = 4;
	cur5.val = 5;
	cur6.val = 6;

	int returnSize = 0;
	int* re = postorder(&cur1, &returnSize);
	printf("return szie =%d\n");
	int i = 0;
	for (i = 0; i < returnSize;i++)
	{
		printf("%d ", re[i]);
	}
	printf("\n");

	_CrtDumpMemoryLeaks();
	return 0;

}