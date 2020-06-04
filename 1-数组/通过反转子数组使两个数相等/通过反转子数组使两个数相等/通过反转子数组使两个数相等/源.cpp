

bool canBeEqual(int* target, int targetSize, int* arr, int arrSize){


	if (targetSize!=arrSize)
	{
		return false;
	}

	int *barr1 = (int*)calloc(1001, sizeof(int));
	int * barr2 = (int*)calloc(1001, sizeof(int));

	int i = 0, j = 0;

	for (i = 0; i < targetSize;i++)
	{
		barr1[target[i]]++;
	}

	for (i = 0; i < arrSize; i++)
	{
		barr2[arr[i]]++;
	}

	for (i = 1; i <= 1000;i++)
	{
		if (barr1[i]!=barr2[i])
		{
			return false;
		}
	}
	return true;

}