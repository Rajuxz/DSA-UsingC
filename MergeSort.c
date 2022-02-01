#include<stdio.h>
int mid,m;
int arr[100],b_arr[100];
void merging(int arr[],int lb, int mid, int ub){
	int i = lb;
	int j = mid+1;
	int k = lb;
	while(i<=mid && j < ub){
		if(arr[i]<=arr[j]){
			b_arr[k] = arr[i];
			i++;
		}
		else{
			b_arr[k] = arr[j];
			j++;
		}
		k++;
	}
	if(i>mid){
		while(j<ub){
			b_arr[k] = arr[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			b_arr[k] = arr[i];
			i++;
			k++;
		}
	}
	for(m = lb; m<ub;m++){
		arr[m] = b_arr[m];
	}
}
void MergeSort(int arr[],int lb,int ub){
	if(lb<ub){
		mid = (lb+ub)/2;
		MergeSort(arr,lb,mid);
		MergeSort(arr,mid+1,ub);
		merging(arr,lb,mid,ub);
	}
}
int main(){
	int n,i;
	printf("Enter how many numbers? ");
	scanf("%d",&n);
	printf("\nEnter %d numbers to sort:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	MergeSort(arr,0,n-1);
	printf("\nAfter Sorting using Merge Sort: ");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
