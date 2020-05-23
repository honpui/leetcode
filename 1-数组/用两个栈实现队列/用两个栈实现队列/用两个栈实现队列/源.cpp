#include<iostream>
using namespace std;

typedef struct {

	int* list1;
	int * list2;
	int list_num;
	//int list2_num;

} CQueue;


CQueue* cQueueCreate() {

	CQueue* queue = (CQueue*)calloc(1,sizeof(CQueue));
	queue->list1 = (int*)calloc(10000,sizeof(int));

	queue->list2 = (int*)calloc(10000, sizeof(int));
	queue->list_num = 0;

	return queue;
}

void cQueueAppendTail(CQueue* obj, int value) {

	obj->list1[obj->list_num++] = value;

	/*int i = obj->list2_num;
	obj->list1_num = 0;
	while (i>0)
	{
		obj->list1[obj->list1_num++] = obj->list2[--i];
	}
	obj->list1[obj->list1_num++] = value;*/

}

int cQueueDeleteHead(CQueue* obj) {

	int i = obj->list_num; int tmp = 0;
	int index = 0;

	if (i==0)
	{
		return -1;
	}

	obj->list_num = 0;
	while (i > 1)
	{
		obj->list2[obj->list_num++] = obj->list1[--i];
	}

	tmp = obj->list1[0];
	
	for (i = 0; i < obj->list_num;i++)
	{
		obj->list1[i] = obj->list2[obj->list_num - i - 1];
	}
	return tmp;
}

void cQueueFree(CQueue* obj) {
	free(obj->list1);
	free(obj->list2);
	free(obj);
}

/**
* Your CQueue struct will be instantiated and called as such:
* CQueue* obj = cQueueCreate();
* cQueueAppendTail(obj, value);

* int param_2 = cQueueDeleteHead(obj);

* cQueueFree(obj);
*/


int main()
{
}