#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[10];
	int i,roll,m1,m2,m3;
	FILE *fp;
	fp=fopen("C:/LAB/C/Files/sample2.txt","r");
	if (fp==NULL)
	{
		printf("File not opened\n");
	}
	fscanf(fp,"%d%s%d%d%d",&roll,name,&m1,&m2,&m3);
	printf("%d %s %d %d %d",roll,name,m1,m2,m3);
fclose(fp);	
}
