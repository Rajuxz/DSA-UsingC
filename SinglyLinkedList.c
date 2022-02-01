
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
}*head;
void createList(int n){
	struct node *newNode, *temp;
	int data,i;
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL){
		printf("Unable to allocate Memory");
	}
	else{
		printf("Enter the data of node:[1]");
		scanf("%d",&data);
		head->info = data;//Link data field with data.
		head->next = NULL;//Link Address field to null.
		temp = head;
		for(i = 2;i<=n;i++){
			newNode = (struct node *)malloc(sizeof(struct node));
			if(newNode == NULL){
				printf("Unable to allocate Memory !");
				exit(0);
			}
			else{
				printf("Enter data for node: [%d] ",i);
				scanf("%d",&data);
				newNode->info = data;
				newNode->next = NULL;
				temp->next = newNode;
				temp= temp->next;
			}
		}
		printf("Singly Linked List created successfully ");
	}
}
void insertAtFirst(){
	struct node *newNode;
	int data;
	newNode = (struct node*)malloc(sizeof(struct node));
	if(newNode == NULL){
		printf("Unable to allocate Memory!");
	}	
	else{
		printf("\n\nEnter data in first node : ");
		scanf("%d",&data);
		newNode->info = data;
		newNode->next = head;
		head = newNode;
		
		printf("%d inserted successfully \n",data);
	}
	printf("\n\n");
}
void insertAtSpecifiedNode(){
	struct node *newNode,*temp;
	int pos;
	int el,i;
	newNode = (struct node *)malloc(sizeof(struct node));
	printf("\nAt which position you want to insert data?");
	scanf("%d",&pos);
	printf("\nEnter data: ");
	scanf("%d",&el);
	newNode->info = el;
	temp = head;
	i  = 1;
	while(i<pos-1){
		temp = temp->next;
		i++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	printf("\n%d Inserted successfully !",el);
	printf("\n\n");
}
void insertAtEnd(){
	struct node *newNode,*last;
	int el;
	newNode = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data:\n");
	scanf("%d",&el);
	newNode->info = el;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
		exit(0);
	}
	else{
		last = head;
		while(last->next !=NULL){
			last = last->next;
		}
		last->next = newNode;
		printf("\nData %d inserted successfully at the last node\n\n",el);
		printf("\n\n");
	}
}
void deleteFirstNode(){
	struct node *temp;
//	int temp;
	if(head == NULL){
		printf("List is Empty !");
		exit(0);
	}
	else{
		temp = head;
		head = temp->next;
		free(temp);
		printf("\nFirst Node Deleted\n");
	}
	printf("\n\n");
}
void deleteLastNode(){
	struct node *temp,*last;
	if(head == NULL){
		printf("UnderFlow !\n\n");
		exit(0);
	}
	else{
		temp = head;
		last = head;
		while(temp->next!=NULL){
			last = temp;
			temp = temp->next;
		}
		last->next = NULL;
		free(temp);
		printf("\n\nLast Node Deleted Successfully!\n\n");
	}
	printf("\n\n");
}
void deleteSpecifiedNode(){
	struct node *temp,*previous,*test;
	int pos,i;
	if(head == NULL){
		printf("Underflow ");
		exit(0);
	}
	else{	
		printf("\nEnter no. of node to delete: \n");
		scanf("%d",&pos);
		i = 1;
		temp = head;
		previous = head;
		while(i<=pos-1){
			previous = temp;
			temp = temp->next;
			i++;
		}
	previous->next = temp->next;
	free(temp);
	printf("\nNode %d deleted",pos);
	}
	printf("\n\n");
}
void displayList(){
	struct node *temp;
	if(head == NULL){
		printf("List is empty! ");
	}
	else{
		temp = head;
		while(temp!=NULL){
			printf("%d  ",temp->info);
			temp = temp->next;
		}
	}
	printf("\n\n");
}
void searchElement(){
	struct node *temp;
	int search = 0;
	int el;
	if(head == NULL){
		printf("Linked list is empty !");
		exit(0);
	}
	else{
	printf("Enter data to search : ");
	scanf("%d",&el);
	temp = head;
	while(temp!=NULL){
		if(temp->info == el){
			search = 1;
			break;
		}
		temp = temp->next;
	}
	if(search == 1){
		printf("\n%d is available!\n",el);
	}
	else{
		printf("\n%d is unavailable in list !\n",el);
	}
	}
	printf("\n\n");
}
int allOperation()
{
	int n,data,choice;
	/*creation of Singly Linked list*/
//	printf("*****Singly Linked List*****");
	printf("Singly linked list.\n\n Creating linked list of 10 nodes.\n");
	createList(10);
	printf("\nInserting in first node.\n");
	insertAtFirst();
	printf("\nnow data in list is: ");
	displayList();
	printf("\nDeleting first node: ");
	deleteFirstNode();
	
	printf("\nAfter deleting first node\n List is: \n");
	displayList();
	getch();
//	system("cls");
//	menu:
//
//	printf("\n1.Enter at first node \n2.Insert at Specified position: \n3.Enter at last node\n");
//	printf("\n4.Delete first node\n5.Delete Last Node\n6.Delete Specified node\n7.Display List\n8.Search\n9. Exit\n");
//	scanf("%d",&choice);
//	switch(choice){
//		case 1:
//			insertAtFirst();
//			goto menu;
//		case 2:
//			insertAtSpecifiedNode();
//			goto menu;
//		case 3:
//			insertAtEnd();
//			goto menu;
//		case 4:
//			deleteFirstNode();
//			goto menu;
//		case 5:
//		 	deleteLastNode();
//		 	goto menu;
//		case 6:
//			deleteSpecifiedNode();
//			goto menu;
//		case 7: 
//			displayList();
//			goto menu;
//		case 8:
//			searchElement();
//			goto menu;	
//		case 9:
//			exit(0);
//			printf("Linked List implementation Successfully !");			
//		default:
//		printf("Something went wrong");
//				
//	}
	return 0;	
}
int main(){
	allOperation();
}
