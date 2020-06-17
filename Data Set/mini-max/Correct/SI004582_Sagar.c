#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int j=0;
    long int min=0,max=0,sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
        sum=0,j=0;
        for(;j<5;j++)
        {
            if(j!=arr_i)
            {
                sum = sum + arr[j];

            }
        }
        if(arr_i ==0)
        {
            min=sum;
            max=sum;
        }
        if(sum>max)
            max=sum;
        else if(sum<min)
            min=sum;
    }
    printf("%ld %ld\n",min,max);
    return 0;
}
