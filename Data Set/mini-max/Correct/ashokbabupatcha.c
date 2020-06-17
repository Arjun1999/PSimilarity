#include<stdio.h>
int main()
{
    long long int i,a[5],temp,sum=0,sum1=0,j;
    
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    for(i=0;i<4;i++)
    {
        sum=sum+a[i];
     }
    printf("%lld ",sum);
    for(i=1;i<5;i++)
    {
        sum1=sum1+a[i];
    }
    printf("%lld",sum1);
}
