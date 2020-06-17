#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int arr[5],i,j,max=0,min=0,sum[5]={0};
    for(int i=0;i<5;i++)
       scanf("%lld",&arr[i]);
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(i!=j)
                    sum[i]+=arr[j];
            }
        }
    min=sum[0];
    max=sum[0];
        for(i=0;i<5;i++)
        {
            if(sum[i]<max)
                max=sum[i];
            if(sum[i]>min)
                min=sum[i];
        }
        
    printf("%lld %lld",max,min);
    return 0;
}
