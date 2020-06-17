#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
                {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long long min=0;
    for(i=0;i<4;i++)
        {
        min=min+arr[i];
    }
    long long max=0;
    for(i=1;i<5;i++)
        {
        max=max+arr[i];
    }printf("%lld %lld",min,max);
    return 0;
}
