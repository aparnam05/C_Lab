#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int arr[7];
	FILE *fp1,*fp2;
	fp1=fopen("C:/LAB/C/Files/sample3.txt","r");
	fp2=fopen("C:/LAB/C/Files/sample4.txt","w");
	if (fp1==NULL)
	{
		printf("R File not opened\n");
	}
	if (fp2==NULL)
	{
		printf("W File not opened\n");
	}
	for (i=0;i<7;i++)
	{
	fscanf(fp1,"%d",&arr[i]);	
	}
	for (i=0;i<7;i++)
	{
		if (arr[i]%2==0)
		fprintf(fp2,"%d ",arr[i]);
	}
	//printf("%d %s %d %d %d",roll,name,m1,m2,m3);
fclose(fp1);
fclose(fp2);	
}
