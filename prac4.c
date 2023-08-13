#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	int i,j,k;
	char s[20];
	fp=fopen("C:/LAB/C/Files/sample2.txt","r");
	fp2=fopen("C:/LAB/C/Files/sample9.txt","w");
	fscanf(fp,"%d%s%d%d",&i,s,&j,&k);
	fprintf(fp2,"%d %s %d %d",i,s,j,k);
}
