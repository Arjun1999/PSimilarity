#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define ULONG_LONG_MAX  (pow(2,32)- 1)

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    unsigned long long int sum, max = 0 , min = ULONG_LONG_MAX;
    
    // [5 choose 4] => 5!/(5-4)! 4! = 5
    
    int count = 0;
    while(count<5)
    {
        sum = 0;
        for(int i=0; i<5;i++)
        {
            if(i == count) continue;
            
            sum = sum + arr[i];
        }
        
        if(sum > max) max = sum;
        if(sum < min) min = sum;        
        count++;
    }
    printf("%llu %llu",min,max);
    return 0;
}
