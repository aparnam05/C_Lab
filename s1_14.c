#include<stdio.h>
#include<string.h>
struct num
{
    int a;
    int b;
};
int gcd(struct num n1)
{
    int i,g=1;
    for (i=1;i<=n1.a&&i<=n1.b;i++)
    {
        if(n1.a%i==0&&n1.b%i==0)
        g=i;
    }
    return g;
}
int main()
{
    struct num n1;
    int g,l;
    scanf("%d%d",&n1.a,&n1.b);
    g=gcd(n1);
    l=n1.a*n1.b/g;
    printf("%d %d",g,l);
}
