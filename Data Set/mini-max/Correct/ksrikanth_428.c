#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int sum[10] = {0};
    long long int a[100] = {0};
    int i,j;
    long long int min, max;
    for(i = 0; i<5; i++)
        scanf("%lld", &a[i]);
    for(j = 0; j<5; j++) {        
        for(i = 0; i<5; i++) {
            if(i !=j)
                sum[j] +=a[i];
        }
    }
    #if 0
    for(i = 0; i<5; i++)
        printf("%lld ", sum[i]);
    #endif
    min = sum[0];
    max = sum[0];
    for(i = 0; i<5; i++) {
        if(sum[i]<min)
            min = sum[i];        
        else if(sum[i] > max)
            max = sum[i];
    }
     printf("%lld %lld\n", min, max);
    return 0;
}
