#include<stdio.h>
int main()
{
	FILE *fp, *fp1;
	int age[10],i;
	fp = fopen("first.dat","w");
	fp1 = fopen("second.dat","w");
	printf("Enter the value of 5 student: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&age);
		if(age>=18 && age<=20)
		{
			fprintf(fp,"%d\n",age);			
		}		
		else
			fprintf(fp1,"%d\n",age);
	}
	fclose(fp);
	fclose(fp1);
	fp = fopen("first.txt","r");
	printf("Output\n____________\n");
	while(fscanf(fp,"%d\n",&age)!=EOF)
	{
		printf("%d\t",age);
	}
}
