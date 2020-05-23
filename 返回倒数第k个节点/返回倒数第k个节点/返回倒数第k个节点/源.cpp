#include<iostream>
using namespace std;



struct ListNode {
    int val;
    struct ListNode *next;
};


int kthToLast1(struct ListNode* head, int k){

	/*  ����һ��k��ѭ������ */
	int * re = (int*)calloc(k, sizeof(int));
	int i = 0;
	while (head)
	{
		re[i%k]=head->val;
		i++;
		head = head->next;
	}
	return re[i%k];
}

/* ˫ָ��汾 */
int kthToLast(struct ListNode* head, int k){

	struct ListNode* slow=head;
	//ListNode* fast=head;
	int i = 0;
	while (head)
	{
		i++;
		head = head->next;
		if (i > k)
		{
			slow=slow->next;
		}
	}
	return slow->val;
}


int main()
{

}