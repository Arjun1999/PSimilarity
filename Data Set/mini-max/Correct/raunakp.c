#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int nums[5];
    long int smallest, largest;
    long long int sum;
    
    scanf("%lld", &nums[0]);
    smallest = largest = sum = nums[0];
    
    for (int i = 1; i < 5; i++) {
        scanf("%lld", &nums[i]);
        if (nums[i] < smallest) {
            smallest = nums[i];
        } else if (nums[i] > largest) {
            largest = nums[i];
        }
        sum += nums[i];
    }
    
    printf("%lld %lld", (sum - largest), (sum - smallest));
    return 0;
}
