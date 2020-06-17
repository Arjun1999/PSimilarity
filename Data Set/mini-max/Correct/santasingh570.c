#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long long sum = 0, min=0, max=0;
    for(int i=0; i<5; i++)
    {
        sum = 0;
        for(int j=0; j<5; j++)
        {
            if(i!=j)
                sum+=arr[j];
        }
        if(i==0)
        {
            min = sum;
            max = sum;
        }
        if(sum < min)
            min = sum;
        else if(sum > max)
            max = sum;
    }
    printf("%lld %lld", min, max);
    return 0;
}
