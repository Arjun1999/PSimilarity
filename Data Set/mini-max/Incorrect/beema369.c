#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
     int i,j;
    long long int sum[5],temp;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<5;i++)
    {
         sum[i]=0;
        for(j=0;j<5;j++)
        {   

            if(j!=i)
            {
                sum[i]=sum[i]+arr[j];
            }
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(sum[j]>sum[j+1])
            {
                temp=sum[j];
                sum[j]=sum[j+1];
                sum[j+1]=temp;
            }
            
        }
        
    }
    printf("%lli  %lli",sum[0],sum[4]);
    return 0;
}

