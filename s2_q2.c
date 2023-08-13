#include<stdio.h>
#include<string.h>
struct hotel
{
    char name[30];
    char address[30];
    char grade;
    float avgcharge;
    int nr;
};
void choice1(struct hotel h[],int n)
{
    char g;
    int i;
    scanf(" %c",&g);
    for(i=0;i<n;i++)
    {
        if (h[i].grade==g)
        printf("%s\n",h[i].name);
    }
}
void choice2(struct hotel h[],int n)
{
    float v;
    int i;
    scanf("%f",&v);
    for(i=0;i<n;i++)
    {
        if (h[i].avgcharge<v)
        printf("%s\n",h[i].name);
    }
}
int main()
{
    int i,n,ch;
    scanf("%d",&n);
    struct hotel h[n];
    for(i=0;i<n;i++)
    {
        scanf("%s ",h[i].name);
        gets(h[i].address);
        scanf(" %c",&h[i].grade);
        scanf("%f",&h[i].avgcharge);
        scanf("%d",&h[i].nr);
    }
    scanf("%d",&ch);
    printf("\n\nOUTPUT\n");
    if (ch==1)
    choice1(h,n);
    else
    choice2(h,n);
}
