#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int A[5];
    long long int min = 0xFFFFFFFF;
    long long int max = 0;
    long long int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%lld",&A[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            sum += A[j];
        }
        sum -= A[i];
        //if(i = 0);
           // min = sum;
        max = (max > sum)? max: sum;
        min = (min < sum)? min: sum;
        sum = 0;
    }
    printf("%lld %lld", min,max);
    
    return 0;
}
