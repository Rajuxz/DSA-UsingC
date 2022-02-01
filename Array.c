#include<stdio.h>
int diagonal(int a[10][10],int m);
void main()
{
	int i,j,n,a[10][10];
	printf("Enter degree of matrix: ");
	scanf("%d",&n);
	printf("Enter %d numbers below: ",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	diagonal(a,n);	
	getch();
}
int diagonal(int a[10][10],int m)
{
	int i;
	float sum;
	for(i=0;i<m;i++)
	{
		sum+=a[i][i];
	}
	printf("Sum of diagonal element is : %.1f",sum);
}

