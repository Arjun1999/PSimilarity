#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    unsigned long int *sum=calloc(5,sizeof(unsigned long int));
    for(int i=0; i<5; i++)
        {
        sum[i]=0;
        for(int j=0; j<5; j++)
            {
            if(j!=i)
            {
                sum[i]=sum[i]+arr[j];
            }
        }
       // We got all the possible sum of elements
    }
    unsigned long int max=sum[0];
    unsigned long int min=sum[0];
    
    for(int i=0;i<5;i++)
        {
        if(min>=sum[i])
            {
            min=sum[i];
        }
        if(max<=sum[i])
            {
            max=sum[i];
        }
    }
    
    printf("%lu %lu",min,max);
    return 0;
}
