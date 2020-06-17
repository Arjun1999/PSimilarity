#include <stdio.h>
int main()
{
    unsigned long int a[5],s[5],i,sum,max,min;
    for(i=1;i<=5;i++)
    {
        scanf("%lu",&a[i]);
        sum=sum+a[i];
    }
    for(i=1;i<=5;i++)
    {
        s[i]=sum-a[i];
    }
    max=s[1];
    min=s[1];
    for(i=1;i<=5;i++)
    {
        if(s[i]>max)
        max=s[i];
        if(s[i]<min)
        min=s[i];
    }
    printf("%d\n%d",min,max);
    return 0;
}


