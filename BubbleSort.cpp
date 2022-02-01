#include<stdio.h>
#include<bits/stdc++.h>
void bubbleSort(int n,int arr[]){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;i++){
			if(arr[i]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	std::cout<<"After using Bubble sort: ";
	for(i=0;i<n;i++){
		std::cout<<arr[i]<<"\t";
	}
}
int main(){
	int n;
	std::cout<<"Enter how many numbers to sort? ";
	std::cin>>n;
	int arr[n];
	std::cout<<"\nEnter "<<n<<" numbers:\n";
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	bubbleSort(n,arr);
	return 0;
	
}
