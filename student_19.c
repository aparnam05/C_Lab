#include<stdio.h>
struct dob
{
    int date;
    int month;
    int year;
};
struct student
{
    char name[30];
    char rno[30];
    struct dob d;
    float cgpa;
};
void choice1(struct student s[],int n)
{
	int i;
    for(i=0;i<n;i++)
    {
        if (s[i].cgpa>8)
        {
            printf("%s ",s[i].name);
            printf("%s ",s[i].rno);
            printf("%d-%d=%d ",s[i].d.date,s[i].d.month,s[i].d.year);
            printf("%.2f\n",s[i].cgpa);
        }
    }
}
void choice2(struct student s[],int n)
{
	int i;
    for(i=0;i<n;i++)
    {
        if (s[i].d.year>2000)
        {
            printf("%s ",s[i].name);
            printf("%s ",s[i].rno);
            printf("%d-%d=%d ",s[i].d.date,s[i].d.month,s[i].d.year);
            printf("%.2f\n",s[i].cgpa);
        }
    }
}
void choice3(struct student s[],int n)
{
    int i,min=s[0].cgpa,k=0;
    
    for (i=1;i<n;i++)
    {
        if (s[i].cgpa<min)
        {
            min=s[i].cgpa;
            k=i;
        }
    }
    printf("%s",s[k].rno);
}
int main()
{
    struct student s[5];
    int i,ch;
    for (i=0;i<5;i++)
    {
        scanf("%s ",s[i].name);
        scanf("%s ",s[i].rno);
        scanf("%d%d%d",&s[i].d.date,&s[i].d.month,&s[i].d.year);
        scanf("%f",&s[i].cgpa);
    }
    scanf("%d",&ch);
    if (ch==1)
    choice1(s,5);
    else if(ch==2)
    choice2(s,5);
    else if (ch==3)
    choice3(s,5);
}
