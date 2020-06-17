#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfun (const void * a, const void * b)
{
   return (*(int *)a - *(int *)b);
}

int main() {
    int i;
    long int sum_min = 0, sum_max = 0;
    int *arr = malloc(sizeof(int) * 5);
    
    for (i = 0; i < 5; i++) {
       scanf("%d",&arr[i]);
    }

    /* sort ascend array */
    qsort(arr, 5, sizeof(int), cmpfun);
    
    for (i = 0; i < 4; i++) {
        sum_min += (long int)arr[i];
        sum_max += (long int)arr[4-i];
    }
    
    printf("%ld %ld", sum_min, sum_max);
    
    return 0;
}
