#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int n, int* arr) {
   int i,j,b,sum[n],max=sum[n-1],min=sum[0];
    for(i=0;i<n;i++)
    {
        b=i;
        for(j=0;j<n;j++)
        {
        if(arr[j]!=b)
            sum[i]=sum[i]+arr[j];
        }
    }
    for(i=0;i<n;i++)
    {
        if(sum[i]<min)
            min=sum[i];
        if(sum[i]>max)
            max=sum[i];
    }
    printf("%d %d",min,max);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
