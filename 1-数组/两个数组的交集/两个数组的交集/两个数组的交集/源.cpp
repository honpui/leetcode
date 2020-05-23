#include <iostream>
using namespace std;

int compare(const void* a,const void*b)
{
	return *(int*)a - *(int*)b;
}

int twodivide(int* nums1,int start,int finish,int search)
{
	if (start>finish)
	{
		return 0;
	}
	int middle = (start + finish) / 2;

	if (nums1[middle]==search)
	{
		return 1;
	}
	else if (nums1[middle]<search)
	{
		return twodivide(nums1, middle+1, finish,  search);
	}
	else
	{
		return twodivide(nums1, start,middle -1, search);
	}
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){

	if ((nums1Size==0) ||(nums2Size==0))
	{
		*returnSize = 0;
		return NULL;
	}

	int* re = (int*)calloc(1000, sizeof(int));
	qsort(nums1,nums1Size,sizeof(int),compare);
	qsort(nums2, nums2Size, sizeof(int), compare);

	int i = 0; int count = 0;


	if (twodivide(nums1, 0, nums1Size - 1, nums2[i]))
	{
		re[count++] = nums2[i];
	}


	for (i = 1; i < nums2Size;i++)
	{
		if ((nums2[i]!=nums2[i-1]) && twodivide(nums1, 0, nums1Size - 1, nums2[i]))
		{
			re[count++] = nums2[i];
		}
		
	}

	*returnSize = count;
	return re;
}


int main()
{
}