#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long long *arr = malloc(sizeof(unsigned long long) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%llu",&arr[arr_i]);
       //printf("arr[arr_i]=%llu\n", arr[arr_i]);
    }
    
    unsigned long long ma = 0, mi = 0;
    for (int i = 0; i < 5; i++) {
        unsigned long long sum = 0;
        for (int j = 0; j < 5; j++) {
            if (j != i) sum += arr[j];
        }
        if (ma==0) ma = sum;
        else if (sum > ma) ma = sum;
        if (mi==0) mi = sum;
        else if (sum < mi) mi = sum;
            
        //printf("sum=%llu mi=%llu ma=%llu\n", sum, mi, ma);
    }
    printf("%llu %llu\n", mi, ma);
    
    return 0;
}
