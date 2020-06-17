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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    //Sort array first
    long int nums[] = {a,b,c,d,e};
    int n = 5;
    int x, y, min, temp;
    for (x = 0; x < n; x++) {
        min = x;
        for (y = x; y < n; y++) {
            if (nums[min] > nums[y]) {
                min = y;
            }
        }
        temp = nums[x];
        nums[x] = nums[min];
        nums[min] = temp;
    }
    //find smallest and largest sum
    long int small = 0;
    long int large = 0;
    small = nums[0] + nums[1] + nums[2] + nums[3];
    large = nums[1] + nums[2] + nums[3] + nums[4];
    printf("%ld %ld\n", small, large);
    return 0;
}
