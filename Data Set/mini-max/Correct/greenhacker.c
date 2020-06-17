#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int min_value;
    long long int max_value;
    long long int sum= 0;
    long long int arr[5];
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    min_value = arr[0];
    max_value = arr[0];
    for(int i = 0; i < 5; i++)
    {
        sum +=arr[i];
        if(arr[i] >  max_value)
            max_value = arr[i];
        if(arr[i] < min_value)
            min_value = arr[i];
    }
    
    printf("%lld %lld",sum-max_value,sum-min_value);
    
    return 0;
}
