#include<stdio.h>
#include<stdlib.h>
int Enqueue();
int Dequeue();
void DisplayQueue();
void isFull();
void isEmpty();
int MAX=4,REAR=-1,FRONT=-1;
int Queue[5];
int main()
{
	int choice,i;
	top:
	printf("\n1. Enter data into queue.");
	printf("\n2. Delete data from queue.");
	printf("\n3. Display data of queue.");
	printf("\n4. Check if Queue is full of not.");
	printf("\n5. Check if queue is empty or not.");
	printf("\n6 Exit.");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			Enqueue();
			goto top;
			case 2:
				Dequeue();
				goto top;
				case 3:
					DisplayQueue();
					goto top;
					case 4:
						isFull();
						goto top;
						case 5:
							isEmpty();
							goto top;
							case 6:
								exit(0);
								break;
					default:
						printf("Enter valid option.");
	}
	return 0;
}
int Enqueue()
{
	int value;
	//FRONT = 0;
	if((FRONT==0&&REAR==MAX-1)||FRONT==REAR+1)
	{
		printf("Queue Overflow.");
		exit(0);
	}
	else{
		if(REAR==-1){
		REAR=0;	
		FRONT = 0;
		}
		else if(REAR==MAX-1)
		{
			REAR = 0;
		}	
		else{
			REAR++;
		}	
		REAR = REAR+1;
		printf("Enter value into Queue: ");
		scanf("%d",&value);
		Queue[REAR]=value;
		printf("\n\n%d enqueue.\n\n",value);
	}
}
int Dequeue()
{
	if(FRONT==-1)
	{
		printf("Underflow.");
		exit(0);	
	}	
	else{
		
		printf("\n\n%d Dequeue.\n",Queue[FRONT]);
		if(FRONT==REAR)
		{
			REAR=-1;
			FRONT=-1;
		}
		else if(FRONT == MAX-1)
		{
			FRONT=0;
		}
		else
	     FRONT = FRONT+1;
	}
	
}
void DisplayQueue()
{
	int i,j;
	if(FRONT==-1)
	{
		printf("Queue Empty.");
		exit(0);	
	}
	else
	{
		printf("\n\nData in Queue: ");
		if(REAR>=FRONT)
		{
		for(i=FRONT;i<=REAR;i++)
		{
			printf("%d\t",Queue[i]);
		}
		}
		else{
			for(i=0;i<=REAR;i++)
			{
				printf("%d   ",Queue[i]);	
			}
			for(j=FRONT; j<=MAX-1;j++)
			{
				printf("%d  ",Queue[j]);
			}
		}
	}

}
void isFull()
{
		if((FRONT==0&&REAR==MAX-1)||FRONT==REAR+1)
	 printf("THe queue is full.");
	 else
	    printf("You can enter some data into queue.");
	
}
void isEmpty()
{
	if(FRONT == -1)
	{
		printf("Empty queue.");
		}	
	else{
		printf("You can display data of queue.");
	}
}

