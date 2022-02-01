#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	printf("Enter any 4 number: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max = (a > b && a > c && a > d) ?
			a : ((b > c && b > d) ?
			b : (b > d? c : d));
	
	printf("%d is max",max);	
	return 0;
}


