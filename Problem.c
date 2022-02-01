#include<stdio.h>
void main(){
	int j,i;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2 == 1)
			printf("A ");
			else
			printf("B ");
		}
		printf("\n");
	}
	
}
