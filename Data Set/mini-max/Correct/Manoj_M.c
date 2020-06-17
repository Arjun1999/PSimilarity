#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int *sum = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int i;
    int j;
    int min;
    int max;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                sum[i]=sum[i]+arr[j];
            }
        }
    }
  
    long int find_min(long int *a)
    {
        int i;
        long int min;
        min=a[0];
        for(i=1;i<5;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        return(min);
    }
    long int find_max(long int *a)
    {
        int i;
        long int max;
        max=a[0];
        for(i=1;i<5;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        return(max);
    }    
    min=find_min(sum);
    max=find_max(sum);
    printf("%ld %ld\n",min,max);
    
    return 0;
}
