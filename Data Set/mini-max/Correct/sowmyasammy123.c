#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int temp;
    long long int min,max;
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
             temp=arr[i];
             arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    min=arr[0]+arr[1]+arr[2]+arr[3];
    max=arr[1]+arr[2]+arr[3]+arr[4];
    printf("%lld %lld",min,max);
    return 0;
}
