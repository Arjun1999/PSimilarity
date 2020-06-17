#include<stdio.h>
int main()
{
    long long int arr[5],sumarr=0;
    int min=0,max=0,i=0;
    for(i=0;i<5;i++) 
        scanf("%lld",&arr[i]);
    for(i=0;i<5;i++)
        sumarr+=arr[i];
       
    long long int sum[5];
    for(i=0;i<5;i++)
        sum[i]=sumarr-arr[i];
     
    for(i=1;i<5;i++)
        if(sum[i]<sum[min]) min=i;
    
    for(i=1;i<5;i++)
        if(sum[i]>sum[max]) max=i;
    printf("%lld %lld",sum[min],sum[max]);
    return 0;
}