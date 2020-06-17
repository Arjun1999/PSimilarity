#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void updateSum (long int newSum, long int *maxSum, long int *minSum) {
    *maxSum < newSum ? *maxSum = newSum : newSum;
    *minSum > newSum ? *minSum = newSum : newSum;
}

int main(){
    long int a, b, c, d, e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int sum = a + b + c + d + e;
    long int minSum = sum, maxSum = 0;
    updateSum(sum - a, &maxSum, &minSum);
    updateSum(sum - b, &maxSum, &minSum);
    updateSum(sum - c, &maxSum, &minSum);
    updateSum(sum - d, &maxSum, &minSum);
    updateSum(sum - e, &maxSum, &minSum);
    
    printf("%ld %ld\n", minSum, maxSum);
    return 0;
}
