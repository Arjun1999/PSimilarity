#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int comparator(const void *p, const void *q)
{
    return *(int*)p - *(int*)q;
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long long sum = 0;
    for (int i = 0; i < 5; i ++)
        sum += arr[i];
    
    qsort(arr, 5, sizeof(int), comparator);
    printf("%lld %lld", sum - arr[4], sum - arr[0]);
    return 0;
}
