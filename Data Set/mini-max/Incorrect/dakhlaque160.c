#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i,*sum[5];
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<5;i++)
    {
        sum[i]=1+2+3+4+5-arr[5-i];
    }
    printf("%d %d",*sum[0],*sum[4]);
    
    
    return 0;
}
