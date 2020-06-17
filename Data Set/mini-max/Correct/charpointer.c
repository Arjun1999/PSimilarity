#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int num[5];
    scanf("%lld %lld %lld %lld %lld",&num[0],&num[1],&num[2],&num[3],&num[4]);
    long int min = num[0];
    long int max = num[0];
    long long int total_sum = 0;
    int i =0;
    
    for (i = 0; i < 5; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
        if (min > num[i])
        {
            min = num[i];
        }
        total_sum += num[i];
    }
    printf ("%lld %lld\n", total_sum - max, total_sum - min);  
    
    return 0;
}
