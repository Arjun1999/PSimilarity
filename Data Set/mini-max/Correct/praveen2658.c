#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    int i; long long int max,min,sum = 0; 
    for(i = 0; i < 5; ++i)
        scanf("%lld",&a[i]);
    max = a[0],min = a[0];
    for(i = 0; i < 5; ++i){
        if(max < a[i])
            max = a[i];
        if(min > a[i])
            min = a[i];
        sum += a[i];
    }  
    printf("%lld %lld",sum - max,sum - min);
    return 0;
}
