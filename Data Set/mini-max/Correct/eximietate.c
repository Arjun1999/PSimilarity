#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>

static int numcmp(const void *a, const void *b);
static int64_t sum4(int64_t *arr);

int main() {
    int64_t arr[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%" SCNd64,&arr[arr_i]);
    }
    
    qsort(arr, 5, sizeof(int64_t), numcmp);
    printf("%" PRId64 " %" PRId64 "\n", sum4(arr), sum4(arr+1));
    
    return 0;
}

static int64_t sum4(int64_t *arr) {
    int64_t ans = 0;
    ans += *arr++;
    ans += *arr++;
    ans += *arr++;
    ans += *arr++;
    return ans;
}

static int numcmp(const void *a, const void *b) {
    return *(int64_t *)a - *(int64_t *)b;
}
