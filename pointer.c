#include<stdio.h>
int main(){
	int a,b,*x,*z;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	x = &a;
	z = &b;
	return 0;
}
