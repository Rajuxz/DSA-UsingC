#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
}*start, *last;
void createList(int n){
	int i,el;
	struct node *newNode;
	if(n>=1){
		start = (struct node*)malloc(sizeof(struct node));
		if(start==NULL){
			printf("Unable to Allocate Memory!");
			exit(0);
		}
		else{
			printf("\nEnter data for node [1]: ");
			scanf("%d",&el);
			start->data = el;
			start->prev = NULL;
			start->next = NULL;
			last = start;
			for(i=2;i<=n;i++){
				newNode = (struct node*)malloc(sizeof(struct node));
				if(newNode!=NULL){
					printf("\nEnter data in node [%d]:",i);
					scanf("%d",&el);
					newNode->data = el;
					newNode->prev = last;
					newNode->next = NULL;
					
					last->next = newNode;
					last = newNode;
				}
				else{
					printf("\n\nError while allocating memory!\n");
					exit(0);
				}
			}
		}
	}
	printf("\nDoubly Linked List Created !");
	printf("\n\n");
}
void insertAtFirst(){
	struct node *newNode;
	int el;
	newNode = (struct node*)malloc(sizeof(struct node));
	if(newNode==NULL){
		printf("Unable to allocate Memory");
		exit(0);
	}
	else{
		printf("\nEnter data to new node: \n");
		scanf("%d",&el);
		newNode->data = el;
		newNode->prev = start;
		newNode->next = NULL;
		start->next = newNode;
		start = newNode;
	}
	printf("\n %d inserted Successfully!",el);
	printf("\n\n");
}
void displayFromBeg(){
	struct node *temp;
	int n = 1;
	if(start == NULL){
		printf("\nLinked List is empty!");
	}
	else{
		temp = start;
		printf(" \n\n Data in linked list:\n\n");
		while(temp!=NULL){
			printf("%d  ",temp->data);
			n++;
			temp= temp->next;
		}
	}
}
int linkedListOperation(){
	int items,choice;
	printf("Enter the number of nodes do you want: ");
	scanf("%d",&items);
	createList(items);
	getch();
	system("cls");
	menu:
	printf("\n1.Insert Node as first node\n2.Display Data ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			insertAtFirst();
			goto menu;
		case 2:
			displayFromBeg();
			goto menu;
			
	}	
	displayFromBeg();
}
int main(){
	linkedListOperation();
	return 0;
}
