#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    long *arr = malloc(sizeof(int) * 5);
    long long com = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    long long max = arr[0]+arr[1]+arr[2]+arr[3];
    long long min = arr[0]+arr[1]+arr[2]+arr[3];
    for(int i = 0; i < 5; i++){
        com = arr[0]+arr[1]+arr[2]+arr[3]+arr[4]-arr[i];
        if(max < com) max = com;
        if(min > com) min = com;
    }
        
    printf("%Ld %Ld", min,max);
    return 0;
}

