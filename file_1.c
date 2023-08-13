#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	int c1=0,c2=0,c3=0,c4=0,c5=0;
	fp=fopen("C:/LAB/C/Files/practice1.txt","r");
	fp2=fopen("C:/LAB/C/Files/practice3.txt","w");
	if (fp==NULL)
	printf("NO");
	char ch;
	while (ch!=EOF)
	{
	ch=fgetc(fp);
	if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		{
			c1++;
			if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			c3++;
			else
			c2++;
		}
		if(ch==' ')
		c4++;
		if (ch=='.')
		c5++;
	//printf("%c",ch);	
	}
	fprintf(fp2,"Total number of alphabets-%d\n",c1);
	fprintf(fp2,"Total number of consonants-%d\n",c2);
	fprintf(fp2,"Total number of vowels-%d\n",c3);
	fprintf(fp2,"Total number of words-%d\n",c4);
	fprintf(fp2,"Total number of sentence-%d\n",c5);
	fclose(fp);
}
