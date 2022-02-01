#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int push(int);
int pop();
int stack[50],tos=-1;
int main()
{
	char postfix[50],ch;
	int i,a,b,c,len,value[50],result;
	printf("Enter valid postfix operation: ");
	gets(postfix);
	len=strlen(postfix);
	for(i=0;i<=len-1;i++)
	{
		ch = postfix[i];
		if(isalpha(ch))
		{
			printf("Enter the value of %c:",ch);
			scanf("%d",&value[i]);
			push(stack[i]);
		}
		else{
			a = pop();
			b = pop();
			switch(ch)
			{
				case '+':
					c = b + a;
					break;
					case '-':
						c = b - a;
						break;
						case '*':
							c = b * a;
							break;
							case '/':
								c = b / a;
								break;
								case '$':
									case '^':
										c = pow(b,a);
										break;
			}
			push(c);
		}
	}
	result=pop();
	printf("\nResult=%d ",result);
	return 0;
}
int push(int val)
{
	tos=tos+1;
	stack[tos]=val;
}
int pop()
{
	int val;
	val=stack[tos];
	tos=tos-1;
	return (val);	
}
