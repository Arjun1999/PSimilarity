#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    // Inputs
    int n = 5;
    long long int nums[n];
    scanf("%lld %lld %lld %lld %lld",&nums[0],&nums[1],&nums[2],&nums[3],&nums[4]);
    
    // Find the max and min
    long long int max, min;
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j != i)
                sum += nums[j];
        }
        if(!i || sum > max)
            max = sum;
        if(!i || sum < min)
            min = sum;
        sum = 0;
    }
    
    // Return the result
    printf("%lld %lld", min, max);
    return 0;
}
