#include <iostream>
using namespace std;

int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){

	int i = 0; int j = 0;
	int index = 0;
	int tmp = 0;
	int flag = 0;
	int** re = (int**)calloc(ASize, sizeof(int*));

	*returnSize = ASize;
	returnColumnSizes[i] = AColSize;/* ���ﷵ�ص���һ��һά�������ָ�룬����ֱ��ָ�� int* AColSize �����Ҳ��һ�����飬����ÿһ�е����� ���۲���������ģ����Կ������������ָ���������Ǹ��� */
	if (AColSize[0] &0x1)
	{
		flag = 1;
	}
	for (i = 0; i < ASize;i++)
	{

		re[i] = (int*)calloc(*AColSize, sizeof(int*));

		index = AColSize[0] - 1;
		for (j = 0; j < AColSize[0]/2;j++)
		{

			tmp = A[i][index];
			re[i][index] = !(A[i][j]);
			re[i][j] = !tmp;
			index--;
		}
		re[i][AColSize[0] / 2] = A[i][AColSize[0] / 2] * (!flag) + (!A[i][AColSize[0] / 2])*flag;
		
	}

	//returnColumnSizes = &reSize;
	return re;

}



int main()
{
	int num = 3;
	//int* *re=(int**)calloc(num,sizeof(int*));
	int i = 0;
	//for (i = 0; i < num; i++)
	//{
	//	re[i] = (int*)calloc(3,sizeof(int));

	//}
	int* re[3];
	int a[] = {1,1,0};
	int b[] = {1,0,1};
	int c[] = {0,0,0};
	re[0] = a;
	re[1] = b;
	re[2] = c;
	int AColSize = 3;

	int returnSize;

	int** returnColumnSizes=(int**)calloc(3, sizeof(int*));
	int x = 0; int y = 0; int z = 0;
	returnColumnSizes[0] = &x;
	returnColumnSizes[1] = &y;
	returnColumnSizes[2] = &z;
	int ** ddd = flipAndInvertImage(re, 3, &AColSize, &returnSize, returnColumnSizes);


	return 0;
}