#include<stdio.h>
int main()
{
	int n[10],i,odd;
	printf("Enter 10 numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	odd=result(n);
	printf("Odd numbers entered: %d",odd);
	
}
int result(int array[10])
{
	int i,count=0;
	for(i=0;i<10;i++)
	{
		if(array[i]%2==1)
		count++;
	}
//	printf("Number of odd number = %d",count);
	return count;
		
}
