#include<stdio.h>
#include<string.h>
struct timee
{
	int hr;
	int min;
	int sec;
};
struct train
{
	int tno;
	char from[30];
	char to[30];
	struct timee t1;
	int nc;
	char model;
};
void choice1(struct train trn[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (strcmp("CBE",trn[i].from)==0)
		{
			printf("%d:%d:%d\n",trn[i].t1.hr,trn[i].t1.min,trn[i].t1.sec);
		}
	}
}
void choice2(struct train trn[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (strcmp("CBE",trn[i].from)==0&&strcmp("BNC",trn[i].to)==0)
		{
			printf("%d\n",trn[i].tno);
		}
	}
}
void choice3(struct train trn[],int n)
{
	int i,c=0;
	for (i=0;i<n;i++)
	{
		if (trn[i].tno%10==6)
		c++;
	}
	printf("%d",c);
}
void choice4(struct train trn[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (trn[i].model=='P'&&trn[i].nc>=15)
		{
		printf("%d ",trn[i].tno);
		printf("%s ",trn[i].from);
		printf("%s ",trn[i].to);
		printf("%d: %d :%d ",trn[i].t1.hr,trn[i].t1.min,trn[i].t1.sec);
		printf("%d ",trn[i].nc);
		printf("%c \n",trn[i].model);
		}
	}
}
void choice5(struct train trn[],int n)
{
	int i,max,j,k;
	struct train temp;
	for (i=0;i<n;i++)
	{
		max=trn[i].nc;
		k=i;
		for (j=i+1;j<n;j++)
		{
			if(trn[j].nc>max)
			{
				max=trn[j].nc;
				k=j;
			}
		}
		temp=trn[k];
		trn[k]=trn[i];
		trn[i]=temp;
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",trn[i].tno);
		printf("%s ",trn[i].from);
		printf("%s ",trn[i].to);
		printf("%d: %d :%d ",trn[i].t1.hr,trn[i].t1.min,trn[i].t1.sec);
		printf("%d ",trn[i].nc);
		printf("%c \n",trn[i].model);		
	}
}
int main()
{
	int n,i,ch;
	scanf("%d",&n);
	struct train trn[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&trn[i].tno);
		scanf("%s ",trn[i].from);
		scanf("%s ",trn[i].to);
		scanf("%d%d%d",&trn[i].t1.hr,&trn[i].t1.min,&trn[i].t1.sec);
		scanf("%d",&trn[i].nc);
		scanf(" %c", &trn[i].model);		
	}
	/*for (i=0;i<n;i++)
	{
		printf("%d ",trn[i].tno);
		printf("%s ",trn[i].from);
		printf("%s ",trn[i].to);
		printf("%d: %d :%d ",trn[i].t1.hr,trn[i].t1.min,trn[i].t1.sec);
		printf("%d ",trn[i].nc);
		printf("%c \n",trn[i].model);		
	}*/
	scanf("%d",&ch);
	if (ch==1)
	{
		choice1(trn,n);
	}
	else if (ch==2)
	{
		choice2(trn,n);
	}
	else if (ch==3)
	{
		choice3(trn,n);
	}
	else if(ch==4)
	{
		choice4(trn,n);
	}
	else if (ch==5)
	{
		choice5(trn,n);
	}
}
