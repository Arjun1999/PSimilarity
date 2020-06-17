#include<stdio.h>

long long max(long long a[])
{
    int i;
    long long ma=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>ma)
            ma=a[i];
    }
    return ma;
}
long long min(long long a[])
{
    int i;
    long long ma=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<ma)
            ma=a[i];
    }
    return ma;
}
int main()
{
    long long a[6],sum=0,ma,mi;
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    ma=max(a);
    mi=min(a);
    printf("%lld %lld",sum-ma,sum-mi);
}
