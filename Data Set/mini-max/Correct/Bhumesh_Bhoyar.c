#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int i,j,k;
    long long int x[6],sum=0,temp;
    for(i=0;i<5;i++)
        {
        sum=0;
        for(j=0;j<5;j++)
            {
            sum=sum+arr[j];            
        }
        x[i]=sum-arr[i];
    }
    for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
            {
            if(x[i]<x[j])
                {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    printf("%lld %lld\n",x[0],x[4]);
    
    
    return 0;
}
