#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int maxSum = 0;
    long int minSum = 999999999;
    long int min = 9999999999;
    long int max = 0;;
    long int nums[5] = {a, b, c, d, e};
    for(int x = 0; x<5; x++){
        if(nums[x] > max)
            max = nums[x];
        if(nums[x] < min)
            min = nums[x];
    }
    maxSum = a + b + c + d + e - min;
    minSum = a + b + c + d + e - max;
    printf("%lld %lld", minSum, maxSum);
    return 0;
}
