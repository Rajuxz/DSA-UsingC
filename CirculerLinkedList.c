#include<stdio.h>
#include<stdlib.h>
struct Node{
	int info;
	struct Node *next;
} *start;
void insertbeg(int item)
{
	struct Node newNode;
	start = 0;//Null Pointer
	newNode=(struct Node*)malloc(sizeof(struct Node));
	
}

int main()
{
	int choice,item;
	printf("1: Insert at beginning\n2:Insert at last.\n");
	printf("3.Delete First Node\n4. Delete last node\n");
	printf("5. Display.");	
	do{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter data to be inserted: ");
				scanf("%d",&item);
				insertbeg(item);
				break;
		}
	}while(choice<=6);
}
