/*****************************
******** ����ȫ���� **********
********�����������**********
*****************************/

#include <stdio.h>
#include <stdlib.h>

int *a;             //��step���� 
int *flag;          //��־�˿���i�Ƿ���ʹ�� ;��δʹ��ֵΪ0������ֵΪ1 
int N;				//N����N����

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
			a[step]=i;             //������step������ 
			flag[i]=1; 
			
			Dfs(step+1);           //������һ���Ĳ���
			flag[i]=0; 			   //�ָ�֮ǰ���Թ�������(���˿���)
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
