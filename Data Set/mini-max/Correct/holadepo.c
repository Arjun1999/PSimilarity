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
    long int nums[5] = {a, b, c, d, e};
    long int min = nums[0];
    long int max = nums[0];
    long int sum = 0;
    
    for (int i = 0; i < 5; i++){
        if(nums[i] > max){
            max = nums[i];
        }
        if(nums[i] < min){
            min = nums[i];
        }
        sum += nums[i];
    }
    printf("%lld %lld\n", sum - max, sum - min);
    
    return 0;
}
