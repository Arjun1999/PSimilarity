#include <stdio.h>
int main()
{
    long int a[10],i,j,sum=0,b[10];
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(i==a[i-1])
        {
            for(j=0;j<5;j++)
            {
                sum=sum+a[j];
            }
            b[i]=sum-a[i-1];
        }
        sum=0;
    }
    printf("%ld %ld",b[5],b[1]);
    return 0;
}