#include<stdio.h>
int add(int a)
{
	if(a!=0)
	{
		return (a+add(a-1));
	}
	else
	 return a;
}
int main()
{
	int n,result;
	printf("Sum to ? ");
	scanf("%d",&n);
	result = add(n);
	printf("Sum to %d is %d ",n,result);
	return 0;
}
