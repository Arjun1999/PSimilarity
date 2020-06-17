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
       scanf("%d",&arr[arr_i]);
    }
    long long int sum = 0;
    long long int vysl[5];
    for(int i = 0; i < 5; i++){
        sum = arr[0]+arr[1]+arr[2]+arr[3]+arr[4]-arr[i];
        vysl[i] = sum;
    }
    long long int max = vysl[0];
    long long int min = vysl[0];
    for(int j = 1; j < 5; j++){
        if(vysl[j] < min)
            min = vysl[j];
        if(vysl[j] > max)
            max = vysl[j];
    }
    printf("%lli %lli", min, max);
    return 0;
}
