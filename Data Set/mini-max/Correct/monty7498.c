#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    long long int *a = (long long int *)malloc(sizeof(long long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
	{
       scanf("%lld",&a[arr_i]);
    }
    long long int  sum[5]={0};
    int i,j;
    for(i=0;i<5;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		if(i!=j)
    		sum[i]=sum[i]+a[j];
		}
		
	}

    long long int max=sum[0],min=sum[0];
	for(i=0;i<4;i++)
	{
		if(max<sum[i+1])
		max=sum[i+1];
		
		if(min>sum[i+1])
		min=sum[i+1];
	}
	
	printf("%lld %lld",min,max);
    
    return 0;
}
