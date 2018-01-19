#include <stdio.h>
#include <stdlib.h>
//给定一个长度为n的数列，冒泡法将这个数列按从小到大的顺序排列。1<=n<=200


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void BubbleSort(int arr[],int size)    //冒泡排序输入的数列 
{
	int i=0;
	int j=0;
	int tmp=0;
	
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
				if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp; 
			}
		}
	}
}
void Print(int arr[],int size)           
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}

int main(int argc, char *argv[]) {
	int n=0;
	int arr[200];
	int i=0;
	scanf("%d",&n);
	if(n<1||n>200)
	{	
		return 1;
	}	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	BubbleSort(arr,n);
	Print(arr,n);
	return 0;
}
