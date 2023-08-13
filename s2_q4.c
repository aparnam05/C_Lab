#include<stdio.h>
#include<string.h>
struct details
{
    int accno;
    char name[30];
    float balance;
};
void choice1(int c,struct details b[],int n)
{
    int i,k;
    float newb;
    scanf("%f",&newb);
    for (i=0;i<n;i++)
    {
        if (b[i].accno==c)
        {
            b[i].balance=newb;
            k=i;
            break;
        }
    }
    printf("%d ",b[k].accno);
    printf("%s ",b[k].name);
    printf("%.2f",b[k].balance);
}
void choice2(struct details b[],int n)
{
    int k;
    for (k=0;k<n;k++)
    {
        printf("%d ",b[k].accno);
        printf("%s ",b[k].name);
        printf("%.2f\n",b[k].balance);
    }
}
int main()
{
    int i,n,ch,c;
    scanf("%d",&n);
    struct details b[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&b[i].accno);
        scanf("%s ",b[i].name);
        scanf("%f",&b[i].balance);
    }
    scanf("%d",&ch);
    if (ch==1)
    {
        scanf("%d",&c);
        choice1(c,b,n);
    }
    if (ch==2)
    {
        choice2(b,n);
    }
}

