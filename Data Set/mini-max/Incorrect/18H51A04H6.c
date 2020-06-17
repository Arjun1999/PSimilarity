#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5],b,c,d,e,f,sum1=0,sum2=0;
    scanf("%d %d %d %d %d",&b,&c,&d,&e,&f);
     if(b<c&&b<d&&b<e&&b<f)
    {
     sum1=c+d+e+f;
    }
    if(f>b&&f>c&&f>e&&f>d)
    {
        sum2=b+c+e+d;
    }
    printf("%d %d",sum2,sum1);
}
