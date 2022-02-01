#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void Push();
void Pop();
void Display();
int TOS = -1;
int MAX = 5;
int STACK[5];
int main(){
	Push();
	Pop();
	return 0;
}
void Push()
{
	int i,data;
	// check for the overflow.
	printf("\nPush operation\n\n");
	if (TOS == MAX-1)
	{
		printf("Overflow !!");
		exit(0);
	}
	//Enter data into STACK;
	else {
		TOS=TOS+1;
		printf("Enter data onto stack: ");
		scanf("%d",&data);
		STACK[TOS]=data;
		printf("\n %d is push into stack.",data);		
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
	printf("\n\nPop Operation: \n\n");
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
