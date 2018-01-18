#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

  long long Fobinacci(int n)
{
	long long f1=1;
	long long f2=1;
	long long fn=0;
	if(n<=2)
	{
		return 1;
	}
	else
	{
		int i=2;
		for(;i<n;i++)
		{
			f1%=10007;
			f2%=10007;
			fn=f1+f2;
			if(fn>=10007)
			{
				fn%=10007;
			}
			f1=f2;
			f2=fn;
		}
	} 
	return fn;	
} 

int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	if(n>=1&&n<=1000000)
	{
		printf("%d\n",Fobinacci(n));
	}
	else
	{
		return -1;
	}
	//system("pause");
	return 0;
}
