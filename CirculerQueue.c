#include<stdio.h>
#include<stdlib.h>
int InsertData();
int RemoveData();
int DisplayData();
int MAX = 4,FRONT = -1, REAR = -1;
int Queue[5];
int main()
{
	int choice;
	top:
	printf("1.Enter data\n2.Remove data\n3.Display Existing data.\n4. Exit.");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			InsertData();
			goto top;
			case 2:
				RemoveData();
				goto top;
				case 3:
					DisplayData();
					goto top;
					case 4:
						exit(0);
						break;
					default:
						printf("Please Enter valid option!");
	}
}
int InsertData()
{
	int value;
	if((REAR == MAX-1)&&(FRONT == REAR+1))
	{
		printf("Queue Overflow!");
		exit(0);
	}
	else{
		if(REAR == -1)
		FRONT=0;
		else if(REAR = MAX)
		  REAR = 0;
		  else
		  {
		  	REAR =REAR+1;
		  	printf("\nEnter data into queue: ");
		  	scanf("%d",&value);
		  	Queue[REAR] = value;
		  	printf("%d pushed into queue.",value);
		  }
	}
}
int RemoveData()
{
	
}
int DisplayData()
{
	
}
