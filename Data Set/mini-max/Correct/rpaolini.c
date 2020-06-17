#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

const int NUM_VALS = 5;

int main(){
    long int vals[NUM_VALS];
    scanf("%ld %ld %ld %ld %ld",&vals[0],&vals[1],&vals[2],&vals[3],&vals[4]);
    long int largest_val = vals[0];
    long int smallest_val = vals[0];
    int largest_idx = 0;
    int smallest_idx = 0;
    for (int i=1; i < NUM_VALS; ++i){
        if (vals[i] > largest_val){
            largest_val = vals[i];
            largest_idx = i;
        }
        if (vals[i] < smallest_val){
            smallest_val = vals[i];
            smallest_idx = i;
        }
    }
    long int max_sum = 0;
    long int min_sum = 0;
    for (int i=0; i < NUM_VALS; ++i){
        if (largest_idx != i)
            min_sum += vals[i];
        if (smallest_idx != i)
            max_sum += vals[i];
    }
    printf("%ld %ld\n", min_sum, max_sum);
    return 0;
}
