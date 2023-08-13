#include<stdio.h>
#include<string.h>
struct cricket
{
    char name[30];
    char team[30];
    float batavg;
};
int main()
{
    struct cricket c[5];
    int i;
    for (i=0;i<5;i++)
    {
        scanf("%s ",c[i].name);
        scanf("%s ",c[i].team);
        scanf("%f",&c[i].batavg);
    }
    printf("INDIA\n");
    for (i=0;i<5;i++)
    {
        if (strcmp(c[i].team,"INDIA")==0)
        printf("%s - %.2f\n",c[i].name,c[i].batavg);
    }
    printf("ENGLAND\n");
    for (i=0;i<5;i++)
    {
        if (strcmp(c[i].team,"ENGLAND")==0)
        printf("%s - %.2f\n",c[i].name,c[i].batavg);
    }
}
