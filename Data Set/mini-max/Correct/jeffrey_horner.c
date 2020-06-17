#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int main() {
    int *a = malloc(sizeof(int) * 5);
    int i, j;
    uint64_t min=0, max=0, sum;
    
    for(i = 0; i < 5; i++){
       scanf("%d",&a[i]);
    }
    for (i = 0; i < 5; i++){
        sum = 0;
        for(j = 0; j < 5; j++){
            if (i==j) continue;
            sum += a[j];
        }
        if (i == 0){
            min = max = sum;
        } else {
            if (sum > max) max = sum;
            if (sum < min) min = sum;     
        }

    }
    
    printf("%ld %ld\n",min,max);
    return 0;
}
