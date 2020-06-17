#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <inttypes.h>
#include <limits.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    uint64_t min_val = ULLONG_MAX;
    uint64_t max_val = 0;
    uint64_t value =0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if  (j != i) {
                value += arr[j];
                //printf(" %" PRIu64 "\n", value);
            }
        }
        
        if (max_val < value) {
             max_val = value;
        } 
        
        if (min_val > value) {
            min_val = value;
        }
        value = 0;
    }
    
    printf("%"PRIu64" %"PRIu64"\n",min_val, max_val);
    return 0;
}
