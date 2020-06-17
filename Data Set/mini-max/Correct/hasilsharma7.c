#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define SIZE 5

int cmpfunc(const void *a, const void *b){
    return (*(long int*)a - *(long int*)b);
}

unsigned long long int get_sum(long int *array, int i, int j){
    unsigned long long int ans = 0;
    for(; i <=j; i++){
        ans += array[i];
    }
    
    return ans;
}
int main(){
    long int array[SIZE];
    unsigned long int max_ans, min_ans;

    int i;
    for(i = 0; i < SIZE; i++){
        scanf("%lld",&array[i]);
    }
    
    qsort(array, SIZE, sizeof(long int), cmpfunc);
       
    printf("%llu %llu", get_sum(array,0, 3), get_sum(array,1, 4));
    return 0;
}
