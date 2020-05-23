#include<iostream>
using namespace std;


typedef struct {
	int num;
	int* list;
	int head;
} MyQueue;

/** Initialize your data structure here. */

MyQueue* myQueueCreate() {

	int* List = (int*)calloc(100,sizeof(int));
	MyQueue* queue = (MyQueue*)calloc(1,sizeof(MyQueue));
	queue->list = List;
	queue->num = 0;
	return queue;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
	obj->list[obj->num+obj->head] = x;
	obj->num++;

}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {

	obj->num--;
	obj->head++;
	return obj->list[obj->head-1];

}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
	return obj->list[obj->head];

}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {
	if (!obj->num)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void myQueueFree(MyQueue* obj) {
	free(obj->list);
	obj->list = NULL;
}

/**
* Your MyQueue struct will be instantiated and called as such:
* MyQueue* obj = myQueueCreate();
* myQueuePush(obj, x);

* int param_2 = myQueuePop(obj);

* int param_3 = myQueuePeek(obj);

* bool param_4 = myQueueEmpty(obj);

* myQueueFree(obj);
*/




int main()
{
}
