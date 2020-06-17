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
    long sum=arr[0],max=0,min=0;
    for(int i=1;i<5;i++){
        if(arr[i]>arr[max])
            max=i;
        if(arr[i]<arr[min])
            min=i;
        sum+=arr[i];
    }
    printf("%ld %ld",(sum-arr[max]),(sum-arr[min]));
    return 0;
}
