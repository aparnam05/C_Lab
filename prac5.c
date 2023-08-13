#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	char ch;
	fp=fopen("C:/LAB/C/Files/practice1.txt","r");
	fp2=fopen("C:/LAB/C/Files/practice6.txt","w");
	if (fp==NULL)
	printf("NO");
	if (fp2==NULL)
	printf("no");
	ch=fgetc(fp);
	while (ch!=EOF)
	{
		//printf("%c ",ch);
		if (ch>='a'&&ch<='z')
		{
			if (ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
			fputc(ch,fp2);
		}
		ch=fgetc(fp);
	}
	fclose(fp);
	fclose(fp2);
}
