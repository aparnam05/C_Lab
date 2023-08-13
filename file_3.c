#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int roll,i;
	float cgpa;
	char name[10];
	fp=fopen("C:/LAB/C/Files/sample8.txt","w");
	if (fp==NULL)
	{
		printf("File not opened\n");
	}
	printf("Enter values");
	for (i=0;i<3;i++)
	{
	scanf("%d",&roll);
	scanf("%f",&cgpa);
	scanf("%s",name);	
	fprintf(fp,"%d %f %s\n",roll,cgpa,name);
	}
fclose(fp);	
}
