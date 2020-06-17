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
    int max=arr[0],min=arr[0],i=0,j=0;
    long sum_max=0,sum_min=0;
    for(i=0;i<5;i++)
    {
        if(max<=arr[i])max=arr[i];
        if(min>=arr[i])min=arr[i];
    }
    //printf("%d  %d\n",max,min);
    //i=0;
    if(max==min)
    {
        sum_max=arr[0]*4;
        sum_min=arr[0]*4;
    }
    else
    {
    for(i=0;i<5;i++)
    {
        if(arr[i]!=min)sum_min=sum_min+arr[i];
        if(arr[i]!=max)sum_max=sum_max+arr[i];
    }
    }
    printf("%lu %lu",sum_max,sum_min);
    return 0;
}
