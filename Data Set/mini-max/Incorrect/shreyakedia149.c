
#include <stdio.h>


int main()
{
    long int a[5],i;
    long long int max=0,min=100000000,sum=0,maxsum,minsum;

        for(i=1;i<=5;i++)
        {
        scanf("%ld",&a[i]);
        sum=sum+a[i];
        }
        for(i=1;i<=5;i++)
        {
        if(max<a[i])
            max=a[i];
        }
        for(i=1;i<=5;i++)
        {
        if(min>a[i])
            min=a[i];
        }

        maxsum=sum-min;

        minsum=sum-max;
        
        printf("%lld %lld",minsum,maxsum);
        








}
