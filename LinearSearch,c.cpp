#include<stdio.h>
int LinearSearch(int arr[],int n,int key){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int n,i,key;
	printf("Enter how many elements?");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d numbers",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nWhich element to search? : ");
	scanf("%d",&key);
	printf("%d ",LinearSearch(arr,n,key));
	
	return 0;
}
