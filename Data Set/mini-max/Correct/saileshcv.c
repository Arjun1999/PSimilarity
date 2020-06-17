#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long minimum = 0, maximum = 0, sum = 0;
    int i, j;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(j == i)
                continue;
            sum += arr[j];
        }
        if(minimum == 0)
            minimum = sum;
        
        if (sum > maximum)
            maximum = sum;
                 
        else if(sum < minimum)
             minimum = sum;
        sum = 0;
    }
    printf("%ld %ld\n", minimum, maximum);
    return 0;
}
