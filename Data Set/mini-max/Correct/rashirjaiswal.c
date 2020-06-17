#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5), n;
    long minsum=0, maxsum=0, tempmin=0, tempmax=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(n=4; n>=0; n--)
        {tempmin=0; tempmax=0;
        for(int arr_i = 0; arr_i < 5; arr_i++){
           if(arr_i!=n) {
               tempmin+=arr[arr_i];
               tempmax+=arr[arr_i];
           }
        }
        if(n==4) 
            {
            minsum=tempmin;
        }
        if(minsum>=tempmin) minsum=tempmin;
        if(maxsum<=tempmax) maxsum=tempmax;
    }
    printf("%ld %ld",minsum,maxsum);
    return 0;
}
