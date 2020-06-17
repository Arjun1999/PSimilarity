#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int max, min;
    long long int nums[5];
    scanf("%lld %lld %lld %lld %lld",&nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
    long long int sum = nums[4] + nums[3] + nums[2] + nums[1] + nums[0];
    long long int sum_[5];
    for(int k = 0; k < 5; k++){
        sum_[k] = sum - nums[k];
    }
    max = min = sum_[0];
    for(int p = 0; p < 5; p++){
        if(sum_[p] < min) min = sum_[p];
        if(sum_[p] > max) max = sum_[p];
    }
    
    printf("%lld %lld", min, max);

    return 0;
}
