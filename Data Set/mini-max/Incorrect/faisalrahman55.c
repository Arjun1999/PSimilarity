#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5),sum_min=0,sum_max=0;
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
        if(arr[i]!=arr[4])
        sum_min=sum_min+arr[i];
        if(arr[i]>arr[0])
            sum_max+=arr[i];
    }
    printf("%d %d",sum_min,sum_max);
    return 0;
}
