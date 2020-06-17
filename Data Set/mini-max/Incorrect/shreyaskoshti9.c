#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int max,min;
    int *arr = malloc(sizeof(int) * 5);
    int *sum = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<5;i++)
    {    for(int j=0;j<5;j++)
         {
            if(i==j)
                j++;
            sum[i]=sum[i]+arr[j];
        }
    }
    max=sum[0];
    min=sum[0];
    for(int j=0;j<5;j++)
    {
       if(sum[j]>max)
            max=sum[j];
        else
        {
            if(sum[j]<min)
            min=sum[j];
        }
    }
    printf("\n%d %d",min,max);
    return 0;
}
