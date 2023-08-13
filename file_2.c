#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[]="Amrita";
	int i;
	FILE *fp;
	fp=fopen("C:/LAB/C/Files/sample7.txt","w");
	if (fp==NULL)
	{
		printf("File not opened\n");
	}
	for (i=0;i<6;i++)
	{
		fputc(str[i],fp);
	}
fclose(fp);	
}
