#include <iostream>
using namespace std;


typedef struct {

	int * array;
	int num;

} RecentCounter;


RecentCounter* recentCounterCreate() {
	int* re = (int*)calloc(10000,sizeof(int));
	RecentCounter* counter = ( RecentCounter*)calloc(1, sizeof( RecentCounter));
	counter->array = re;
	counter->num = 0;
	return counter;
}


int find_index(int* array,int start,int finish,int time)
{
		if (time<=0)
		{
			return 0;
		}

		if (start>finish)
		{
			return start;
		}

		if (start==finish)
		{
			if (array[start]>=time)
			{
				return start;
			}
			else
			{
				return start + 1;
			}
			
		}
		int middle = (start + finish) / 2;
		if (array[middle]>time)
		{
			return find_index(array, start, middle - 1, time);
		}
		else if (array[middle]<time)
		{
			return find_index(array,  middle + 1,finish, time);
		}
		else
		{
			return middle;
		}
}

int recentCounterPing(RecentCounter* obj, int t) {
	obj->array[obj->num++] = t;
	int count = find_index(obj->array, 0, obj->num-1, t - 3000);
	return obj->num - count;
}

void recentCounterFree(RecentCounter* obj) {
	free(obj->array);
	free(obj);

}

/**
* Your RecentCounter struct will be instantiated and called as such:
* RecentCounter* obj = recentCounterCreate();
* int param_1 = recentCounterPing(obj, t);

* recentCounterFree(obj);
*/

int main()
{

	RecentCounter* obj = recentCounterCreate();
	int param_1 = recentCounterPing(obj, 1);
	param_1 = recentCounterPing(obj, 100);
	param_1 = recentCounterPing(obj, 3001);
	param_1 = recentCounterPing(obj, 3002);
	//param_1 = recentCounterPing(obj, 4152);

	recentCounterFree(obj);

}