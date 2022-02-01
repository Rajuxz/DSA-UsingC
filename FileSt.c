#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	int i,age;
	FILE *fp;
	fp=fopen("Student1.txt","w");
	for(i=0;i<3;i++)
	{
		printf("Enter name: ");
		fflush(stdin);
		gets(name);
		printf("Age: ");
		scanf("%d",&age);
		
		fprintf(fp,"%s\t\t%d\n",name,age);
	}
	fclose(fp);
	fopen("Student1.txt","r");
	printf("\nName\t\tAge\n");
	while(fscanf(fp,"%s%d",&name,&age)!=EOF)
		printf("%s\t\t%d\n",name,age);
	fclose(fp);
	
}
