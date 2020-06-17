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
    int temp;
    long max,min;
    min=max=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=1;i<5;i++)
    {
        max+=arr[i];
        
    }
    for(int i=0;i<4;i++)
    {
        min+=arr[i];
        
    }
    printf("%ld %ld",min,max);
    return 0;
}
