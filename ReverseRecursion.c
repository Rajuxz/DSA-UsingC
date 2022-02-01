#include<stdio.h>
int recReverse(int n);
int main()
{
	int num,rev;
	printf("Enter the number to  reverse it:");
	scanf("%d",&num);
	rev = recReverse(num);
	printf("Reverse of %d is %d.",num,rev);
}
int r=0;
int recReverse(int n){
	int digit;
	if(n==0)
	 return (r);
	else{
		digit=n%10;
		r = r*10+digit;
		return (recReverse(n/10));
	}
	
}
