#include<stdio.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	char ch;
	fp1=fopen("C:/LAB/C/Files/eval1.txt","r");
	fp2=fopen("C:/LAB/C/Files/eval2.txt","r");
	fp3=fopen("C:/LAB/C/Files/eval3.txt","w");
	if (fp1==NULL)
	{
		printf("File1 Error");
	}
	if (fp2==NULL)
	{
		printf("File2 Error");
	}
	if (fp3==NULL)
	{
		printf("File3 Error");
	}
	ch=fgetc(fp1);
	while (ch!=EOF)
	{
		if (ch>='a'&&ch<='z')
		fputc(ch,fp3);
		ch=fgetc(fp1);
	}
	ch=fgetc(fp2);
	while (ch!=EOF)
	{
		if (ch>='0'&&ch<='9')
		fputc(ch,fp3);
		ch=fgetc(fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
