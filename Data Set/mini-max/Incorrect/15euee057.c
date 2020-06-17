#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *a = malloc(sizeof(int) * 5), sum[5]={0},i,temp;
    for(i = 0; i < 5; i++){
       scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j)
                continue;
            sum[i-1]=sum[i-1]+a[j];   
        }
        
        
    }
    for(i=0;i<5;i++)
    {
        if(sum[i]>sum[i+1])
        {
            temp=sum[i+1];
            sum[i+1]=sum[i];
            sum[i]=temp;
        }
    }
    printf("%d %d",sum[1],sum[5]);
    return 0;
}
