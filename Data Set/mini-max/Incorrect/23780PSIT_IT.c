#include<stdio.h>
main()
{
    long long int arr[100];
    int sum[100]={0},i,j,n,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i)
            sum[i]=sum[i]+arr[j];
        }
    } 
    min=sum[0];
    max=sum[0];
    for(i=1;i<n;i++)
    {
        if(max<sum[i])
        max=sum[i];
        if(min>sum[i])
        min=sum[i];
    }
    printf("%d %d",min,max);
}