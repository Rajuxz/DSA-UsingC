#include<stdio.h>
int choice;
int create()
{
	int size;
	printf("Enter size of list: ");
	scanf("%d",&size);
	int list[size];
	
	printf("List successfully created!! ");
	return list[size];
	
}
int insertData(int list[]){
	printf("Enter ")
}
int main()
{
	printf("1.Create list\n2. Insert Element\n3.Delete Element\n4.Modify");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
			create();
			break;
			case 2:
				insertData();
				break;
	}
	
}
