#include<stdio.h>
#include<string.h>
struct address
{
    int dno;
    char street[30];
    char city[30];
    int pincode;
};
struct home
{
    char name[30];
    struct address a;
    int unit;
};
int main()
{
    int n,i;
    scanf("%d",&n);
    struct home h[n];
    for (i=0;i<n;i++)
    {
        scanf("%s ",h[i].name);
        scanf("%d",&h[i].a.dno);
        scanf("%s ",h[i].a.street);
        scanf("%s ",h[i].a.city);
        scanf("%d",&h[i].a.pincode);
        scanf("%d",&h[i].unit);
    }
    for (i=0;i<n;i++)
    {
        printf("Bill Home %d=",i+1);
        if (h[i].unit<=50)
        printf("50\n");
        else if(h[i].unit<=200)
        printf("%.2f\n",1.25*h[i].unit);
        else
        printf("%.2f\n",1.35*h[i].unit);
    }
}

