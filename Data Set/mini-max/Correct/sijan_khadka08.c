#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int sum[5]={0,0,0,0,0},temp=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            if(j==i)
            {
                
            }
            else
            {
               sum[i]+=arr[j]; 
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(sum[i]<sum[j])
            {
                temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
    printf("%ld %ld",sum[4],sum[0]);
    return 0;
}
