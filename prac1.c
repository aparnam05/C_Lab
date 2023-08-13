#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	char ch;
	fp=fopen("C:/LAB/C/Files/practice1.txt","r");
	fp2=fopen("C:/LAB/C/Files/practice2.txt","w");
	if (fp==NULL)
	printf("no");
	if (fp2==NULL)
	printf("NOO");
	ch=fgetc(fp);
	while (ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp);
	}
	fclose(fp);
	fclose(fp2);
}
