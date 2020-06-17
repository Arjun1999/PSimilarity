#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  long long int *arr = malloc(sizeof(long long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    long long int temp;
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
        printf("%lld %lld",arr[0]+arr[1]+arr[2]+arr[3],arr[1]+arr[2]+arr[3]+arr[4]);
    return 0;
}
