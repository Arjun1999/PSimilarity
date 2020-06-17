#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int input[5]; /* 5 integers */
    int i;
    int min_idx = 0;
    int max_idx = 0;
    long int min_sum = 0;
    long int max_sum = 0;
    
    scanf("%ld %ld %ld %ld %ld",
          &input[0],&input[1],&input[2],&input[3],&input[4]);
    
    /* Determine smallest and biggest integer */
    for (i = 0; i < 5; i++) {
        if (input[i] < input[min_idx]) {
            min_idx = i;
        }
        if (input[i] > input[max_idx]) {
            max_idx = i;
        }
    }
    
    /* Calculate min/max sum */
    for (i = 0; i < 5; i++) {
        min_sum += (i != max_idx) ? input[i] : 0;
        max_sum += (i != min_idx) ? input[i] : 0;
    }
    
    printf("%ld %ld\n", min_sum, max_sum);
    
    return 0;
}
