/*****************************
******** 数的全排列 **********
********深度优先搜索**********
*****************************/

#include <stdio.h>
#include <stdlib.h>

int *a;             //第step盒子 
int *flag;          //标志扑克牌i是否已使用 ;若未使用值为0，否则，值为1 
int N;				//N代表N个数

void Init(int *f)
{ 
	int i=1;
	for(i=1;i<=N;i++)
	{
		f[i]=0;
	}
}
void Dfs(int step)
{
	int i=1;
	if(step==N+1)
	{
		for(i=1;i<=N;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
		return;
	}
	for(i=1;i<=N;i++)
	{
		if(flag[i]==0)
		{
			a[step]=i;             //操作第step个盒子 
			flag[i]=1; 
			
			Dfs(step+1);           //继续下一步的操作
			flag[i]=0; 			   //恢复之前尝试过的数字(即扑克牌)
		}
	}
	return;
}  

int main(int argc, char *argv[]) {
	
	scanf("%d",&N);
	
	a=(int *)malloc(N+1);
	
    flag=(int *)malloc(N+1);
    Init(flag);
		
	Dfs(1);
	free(a);
	free(flag); 
	return 0;
}
