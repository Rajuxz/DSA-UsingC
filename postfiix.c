#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

void push(int);
int pop(void);
int stack[50],tos=-1;
void main()
{
	char postfix[50],ch;
	int i,a,b,c,result,len,value[50];
	printf("\n Input the valid postfix expression: \n");
	gets(postfix);
	len=strlen(postfix);
	for(i=0;i<=len-1;i++)
	{
		ch=postfix[i];
		if(isalpha(ch))
		{
			printf("\nEnter the value of %c:",ch);
			scanf("%d",&value[i]);
			push(value[i]);
		}
		else
		{
			 a=pop();
			 b=pop();
			 switch(ch)
			 {
			 	    case '+':
			 	   	    c=b+a;
			 	   	    break;
			 	    case '-':
			 	   	    c=b-a;
			 	   	    break;
			 	   	case '*':
			 	   	    c=b*a;
			 	   	    break;
			 	   	case '/':
			 	   	    c=b/a;
			 	   	    break;
			 	   	case '$':
			 	   	case '^':
			 	   		c=pow(b,a);
			 	   		break;	   		
			 	   
			 }
			 push(c);
	    }
	    
	}
	result=pop();
	printf("\nResult=%d",result);
	getch();
}
void push(int val)
{
	tos++;
	stack[tos]=val;
}
int pop()
{
	int val;
	val=stack[tos];
	tos--;
	return(val);
}
