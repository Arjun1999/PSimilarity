#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5], s[5], sum = 0;
    int i;
    for(i=0; i<5; i++){
        scanf("%lld",&a[i]);
        sum = sum+a[i];
    }
    for(i=0; i<5; i++){
        s[i] = sum-a[i];
    }
    long long int max, min;
    max = min = s[0];
    for(i=1; i<5; i++){
        if(s[i]>max)
            max = s[i];
        if(s[i]<min)
            min = s[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
