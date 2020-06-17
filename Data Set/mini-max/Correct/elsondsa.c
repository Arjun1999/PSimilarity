#include<stdio.h>
int main()
{
    long long int a[5],sum=0,min,max,smax,smin,i;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    min=a[0];
     for(i=1;i<5;i++)
    {
        if(min>a[i])
            min=a[i];
    } 
    smax=sum-min;
    smin=sum-max;
    printf("%lld %lld\n",smin,smax);
    return 0;
}
    
  
