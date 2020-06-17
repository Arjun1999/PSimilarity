#include <math.h>
#include <stdio.h>
int main()
{
    long int a[5];
    for(int i=0;i<5;i++)scanf("%ld",&a[i]);
    long int d;
    d=a[0];
    for(int i=0;i<5;i++)
    {
        if(d<=a[i])d=a[i];
    }
    long int m;
    m=a[0];
    for(int i=0;i<5;i++)
    {
        if(m>=a[i])m=a[i];
    }
    long int sum=0;
    for(int i=0;i<5;i++)sum+=a[i];
    printf("%ld %ld",sum-d,sum-m);
    return 0;
}
    

