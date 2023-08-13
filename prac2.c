#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	int i;
	char ch;
	fp=fopen("C:/LAB/C/Files/practice1.txt","r");
	fp2=fopen("C:/LAB/C/Files/practice4.txt","w");
	if (fp==NULL)
	printf("no");
	if (fp2==NULL)
	printf("NOO");
	ch=fgetc(fp);
	while (ch!=EOF)
	{
		if (i%2==0)
		fputc(ch,fp2);
		ch=fgetc(fp);
		i++;
	}
	fclose(fp);
	fclose(fp2);
}
