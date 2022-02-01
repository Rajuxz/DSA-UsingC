#include<stdio.h>
int fibonacci(int n){
	if(n==0)
	  return (0);
	else if(n==2)
	  return (1);
	else
	  return (fobonacci(n-1)+fibonacci(n-2));
}
int main()
{
	int n,fibo;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	fibo = fibonacci(n);
	printf("Fibonacci series to %d term is %d",n,fibo);
}
