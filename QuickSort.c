#include<stdio.h>
#include<conio.h>
int i,j,loc,n;
int arr[100],temp;
int x,y,pi;
int partition(int arr[],int lb,int ub){	
	x = lb;
	y = ub;
	pi = arr[lb];
	while(x<y){
		while(arr[x]<=pi)
		 x++;
		while(arr[y] >pi)
		  y--;
		if(x<y){
			temp = arr[x];
			arr[x] = arr[y];
			arr[y] = temp;
		}
	}
	arr[lb] = arr[y];
	arr[y] = pi;
	return y;
	
}
int QuickSort(int arr[],int lb,int ub){
	if(lb<ub){
		loc = partition(arr,lb,ub);
		QuickSort(arr,lb,loc-1);
		QuickSort(arr,loc+1,ub);
	}
}
int main(){
//	int n;
	printf("Enter how many numbers to sort?");
	scanf("%d",&n);
	printf("\nEnter %d numbers : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	QuickSort(arr,0,n-1);
	
	printf("\nUsing QuickSort ! \n\n");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
