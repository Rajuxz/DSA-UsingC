#include<stdio.h>
void TOH(int, char BEG[], char AUX[], char END[]);
int count=0;
int main()
{
	int n;
	printf("Enter the number of disk: ");
	scanf("%d",&n);
	TOH(n, "BEG","AUX","END");
	printf("\n\nTotal number of move is %d",count);
	return 0;
}
void TOH(int n, char BEG[], char AUX[], char END[]){
	if (n==1){
		printf("\nMove disc from %s to %s ",BEG,END);
		count++;
	}
	else{
		TOH(n-1, BEG, END,AUX);
		printf("\nMove disc from %s to %s.",BEG,END);
		count++;
		TOH(n-1,AUX,BEG,END);
	}
}
