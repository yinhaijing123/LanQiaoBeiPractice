/***********************************************************************************************
** 例：一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。 找出这两个数字，编程实现。**
***********************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void FindNumsOfAppearOnce(int *arr, int size,int* num1,int* num2)
{
	int i = 0;
	int tmp = arr[0];
	int flag = 1;

	//先整体进行异或运算，得到的结果（记为tmp，且tmp为非0值）
	//tmp则为那两个只出现一次的数字进行异或运算的结果

	for (i = 1; i < size; i++)     
	{
		tmp ^= arr[i];
	}

	// tmp中至少有一位为1，从tmp中找到第一个为1的位的位置，记为:flag
	while (!tmp&flag)       
	{
		flag <<= 1;
	}

	//根据数字第flag位是否为1，将数组分为两个子数组
	for (i = 0; i < size; i++)     
	{
		if (arr[i] & flag)
		{
			*num1 ^= arr[i];
		}
		else
		{
			*num2 ^= arr[i];
		}
	}
}



int main()
{
	
	int num1 = 0;
	int num2 = 0;
	
	int arr[10] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
	int tmp =arr[0] ;
	int lenth = sizeof(arr)/sizeof(arr[0]);

	FindNumsOfAppearOnce(arr, lenth, &num1, &num2);

	printf("数组中只出现一次的两个数分别是：%d %d\n", num1, num2);
	system("pause");
	return 0;
}