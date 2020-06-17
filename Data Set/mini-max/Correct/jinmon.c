#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int minpos=0, maxpos=0;
    long long int minsum=0,maxsum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    minpos=0;
    maxpos=0;
    for (int i=1;i<5;i++){
        if (arr[i]>arr[maxpos]){
            maxpos=i;
        }
        if (arr[i]<arr[minpos]){
            minpos=i;
        }
    }
    for (int i=0;i<5;i++){
        if (i!=maxpos){
            minsum+=arr[i];
        }
        if (i!=minpos){
            maxsum+=arr[i];

        }
    }
    
    printf("%lld %lld\n",minsum, maxsum);
    return 0;
}
