#include<stdio.h>
int main()
{
    int a,b,c,d,e,r1,r2;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(e<1000)
    {
    r1 = (a+b+c+d+e)-1;
    }else
    {
        r1 = (a+b+c+d+e)-2;
    }
    r2 = a+b+c+d;
    printf("%d %d",r2,r1);
}
