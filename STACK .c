#include<stdio.h>
#include<stdlib.h>
void Push();
void Pop();
void Display();
//void Option();
int TOS = -1;
int MAX = 5;
int STACK[5];

int main()
{
	int ch;
	menu:
//	system("cls");
//	printf("\n1. Push data into stack\n");
	printf("Push data : \n");
	Push();
	//printf("\nData on stack are:\n");
	//Display();
	printf("\nPop data from stack: ");
	Pop();
	printf("");
	scanf("%d",&ch);
//	switch(ch)
//	{
//		case 1:
//			Push();
//			goto menu;
//			case 2:
//				Pop();
//				goto menu;
//				case 3:
//					Display();
//					goto menu;
//					case 4:
//						exit(0);
//						break;
//						default:
//							printf("\nInvalid Option!");
//							goto menu;
//}
//return 0;
}

void Push()
{
	int i,data;
	// check for the overflow.
	if (TOS == MAX-1)
	{
		printf("Overflow !!");
		exit(0);
	}
	//Enter data into STACK;
	else {
		TOS=TOS+1;
		printf("Enter 5 data onto stack: ");
		for(i=0;i<5;i++){
		scanf("%d",&data);
		STACK[TOS]=data;	
		}
	}
	getch();
	//Option();
}
void Pop()
{
	/*Start 
	//check for underflow.
	if TOS = -1 print underflow and exit.
	remove data from stack  popped data = STACK[top]
	decrese the valude of stack.
	TOS = TOS -1
	*/
	if(TOS == -1)
	{
		printf("Underflow!!");
	}
	else {
		printf("\nPopped data = %d",STACK[TOS]);
		TOS = TOS-1;	
	}
	getch();
	
}
void Display()
{
	int i;
	if(TOS == -1)
	{
		printf("The stack is empty.");
	}
	else{
	printf("\nData in stack are:\n");
	for(i=0;i<5;i++)
	{
		printf("  %d\t",STACK[i]);
		
	}
	}
//	getch();	
}
