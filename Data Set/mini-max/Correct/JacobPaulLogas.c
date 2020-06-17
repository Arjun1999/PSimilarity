#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int nums[5];
    unsigned long long int sum = 0;
    unsigned long long int min, max;
    scanf("%lld %lld %lld %lld %lld",&nums[0],&nums[1],&nums[2],&nums[3],&nums[4]);
    min = nums[0];
    max = nums[0];
    for(int i = 0; i < 5; i++)
    {
        sum += nums[i];
        if(nums[i] < min)
            min = nums[i];
        else if(nums[i] > max)
            max = nums[i];
    }
    printf("%lld %lld", sum - max, sum - min);
    return 0;
}
