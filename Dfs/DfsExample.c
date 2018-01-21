#include<stdio.h>
#include<stdlib.h>

int a[10];
int flag[10];
int count;

void Dfs(int step)
{
	int i=0;
	if(step==10)
	{
		if(a[1]*100+a[2]*10+a[3]+a[4]*100+a[5]*10+a[6]==a[7]*100+a[8]*10+a[9])
		{
			count++;
			printf("%d%d%d+%d%d%d=%d%d%d\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		}
		return;
	}
	for(i=1;i<10;i++)
	{
		if(flag[i]==0)
		{
			a[step]=i;
			flag[i]=1;
			
			Dfs(step+1);
			flag[i]=0;
		}
		
	}
	return;
} 

int main()
{
	
	Dfs(1); 
	printf("%d\n",count/2);
	return 0;
}
