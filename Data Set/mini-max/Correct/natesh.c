#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i, j,temp;
    long long int max=0, min=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(i=0;i<5;i++)
        {
        for(j=0;j<4;j++)
            {
            if(arr[j]<arr[j+1])
                {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       if(arr_i!=4)
           {
        max+=arr[arr_i];
       }
        if(arr_i!=0)
            {
            min+=arr[arr_i];
        }
    }
    
    printf("%lld %lld", min, max);
    return 0;
}
