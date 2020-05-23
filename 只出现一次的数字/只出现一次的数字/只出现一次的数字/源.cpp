int singleNumber(int* nums, int numsSize){

	int i = 0;
	int count = 0;
	for (i = 0; i<numsSize; i++)
	{
		count ^= nums[i];
	}
	return count;

}