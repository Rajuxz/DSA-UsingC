#include<stdio.h>
int main()
{
	int count=0,i=100,j,flag=0;
	for(i;i<=500;i++)
	{
		flag=0;		
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
			{
				flag=flag+1;
			}
		}
	}
	if(count == 2)
	printf("%d",i);
}
