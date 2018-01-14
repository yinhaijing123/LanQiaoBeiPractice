
//【】【】【】+【】【】【】=【】【】【】
//将数字1~9分别填入九个【】中， 每个数字只能使用一次并使等式成立。
//例如：173+286=459 
 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Test()  
{
	int a=1;
	int b=1;
	int c=1;
	int d=1;
	int e=1;
	int f=1;
	int g=1;
	int h=1;
	int i=1;
	int x=0;
	int y=0;
	int z=0;
	for(a=1;a<10;a++)
	{
		for(b=1;b<10;b++)
		{
			for(c=1;c<10;c++)
			{
				for(d=1;d<10;d++)
				{
					for(e=1;e<10;e++)
					{
						for(f=1;f<10;f++)
						{
							for(g=1;g<10;g++)
							{
								for(h=1;h<10;h++)
								{
									for(i=1;i<10;i++)
									{
										if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i\
									   	    &&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i&&c!=d\
											 &&c!=e&&c!=f&&c!=g&&c!=h&&c!=i&&d!=e&&d!=f&&d!=g\
											  &&d!=h&&d!=i&&e!=f&&e!=g&&e!=h&&e!=i&&f!=g&&f!=h\
											   &&f!=i&&g!=h&&g!=i&&h!=i )
											   {
											   		x=a*100+b*10+c;
											   		y=d*100+e*10+f;
											   		z=g*100+h*10+i;
											   		if(x+y==z)
											   		{
											   			printf("%d+%d=%d\n",x,y,z);
											   		}
											   }
									}
								}
							}
						}
					}
				}
			}
		}

	}
	
}

int main(int argc, char *argv[]) {


	Test();
	
	return 0;
}
